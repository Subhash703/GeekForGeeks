#include <bits/stdc++.h>
using namespace std;
 
// String searching Algorithm
 
// Naive Pattern Searching
void searchPatternNaive(string s, string p){
	int n = s.length(), m = p.length();
 
	// cout<<n<<" "<<m<<endl;
	vector<pair<int,int>>v;
	for(int i = 0; i<n-m; i++){
		int j;
 
		// For current index i, check for the pattern
		for(j = 0; j<m; j++){
			if(s[i+j] != p[j])
				break;
		}
 
		if(j == m){
			// cout<<"Found at : "<<i<<endl;
			v.push_back(make_pair(i,i+j-1));
		}
	}
 
	cout<<"\nWith Naive approach 👇"<<endl;
	for(int i =0; i<v.size(); i++){
		cout<<"["<<v[i].first<<","<<v[i].second<<"]"<<endl;
	}
}
 
void calculateLPS(int* lps,string s, string p){
	int len = 0; 
	int m = p.length();
	int i =1;
	lps[0] = 0;
	while(i<m){
 
		if(p[i] == p[len]){
			len++;
			lps[i] = len;
			i++;
		}
		else{
 
			if(len != 0){
				len = lps[len-1];
			}
			else{
				lps[i]=0;
				i++;
			}
		}
	}
}
// KMP pattern matching
void searchWithKMP(string s, string p){
	int n = s.length(), m = p.length();
 
	// cout<<n<<" "<<m<<endl;
	vector<pair<int,int>>v;
 
	int lps[m];
	calculateLPS(lps, s,p);
	int i =0;
	int j = 0;
 
	while( i < n ){
		if(p[j] == s[i]){
			i++;
			j++;
		}
 
		if(j==m){
			// cout<<"Found at : "<<i-j<<endl;
			v.push_back(make_pair(i-j,i-1));
			j = lps[j-1];
		}
		else if(i<n && s[i] != p[j]){
			if(j!=0)
				j = lps[j-1];
			else
				i++;
		}
	}
 
	cout<<"\nWith KMP Algorithm 👇 "<<endl;
	for(int i =0; i<v.size(); i++){
		cout<<"["<<v[i].first<<","<<v[i].second<<"]"<<endl;
	}
}
 
 
 
int main() {
	/*
	String : A A B A A B A A D A A B A A B A
	pattern: A A B A
 
	output : [0,3], [9,12] & [12,15]
	*/
 
	string s = "AABAACAADAABAABAAA", p = "AABA";
	// string s = "ABABDABACDABABCABAB", p ="ABABCABAB";
	// Naive Approach			: Timecmplexity - O(n*(n-m+1)
	searchPatternNaive(s,p);
	// KMP algorithm			: TimeComplexity : O(n)
	searchWithKMP(s,p);
	return 0;
}


 
/*
Standard input is empty
String : A A B A A B A A D A A B A A B A
pattern: A A B A
Output
With Naive approach 👇
[0,3]
[9,12]
[12,15]

With KMP Algorithm 👇 
[0,3]
[9,12]
[12,15]

*/
