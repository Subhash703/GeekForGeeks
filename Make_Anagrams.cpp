#include <iostream>
using namespace std;

//WAP to determine the minimum modification I should perform so as to make two strings anagrams of each other. I am not_eq
//allowed to delete any element. Both arrays are of same size.
int main() {
	// your code goes here
	string s = "abc", t = "ddd";
	int a[26] = {}, cnt=0;
	for(int i = 0; i<26; i++){
	    a[s[i]-'a']++;      //a[0] = 1, a[1]=1, a[2]=1;
	}
	for(int i = 0; i<26; i++){
	    a[t[i]-'a']--; // a[3]=-1 =>-2=>-3;
	}
	for(int i = 0; i<26; i++){
	        cnt += abs(a[i]);
	        
	        /*
	        if(a[i]!=0){
	            cnt+=abs(a[i]);
	            cout<<(cnt/2);
	        }
	        if(a[i]!=0){
	            cnt+=abs(a[i]);
	            cout<<(cnt/2);
	        }
	        */
	}
	cout<<(cnt/2);
	return 0;
}
