
/*
Given an array A[] of integers, sort the array according to frequency of elements. That is elements that have higher frequency come first. If frequencies of two elements are same, then smaller number comes first.

  1. find the frequency of each number in the array, store it in the map;
  2. Create a vector containing pairs in it.
  3. Copy the map elements in the vector using copy function. 
  4. Sort the vector using comparator function.
  
*/

#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<int,int>& a,const pair<int,int>& b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second > b.second; 
}

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0){
	    int n;
	    cin>>n;
	    int a[n];
	    map<int,int>mp;
	    for(int i = 0;i<n; i++){
	        cin>>a[i];
	        mp[a[i]]++;
	    }
	    
	    vector<pair<int,int>> v;
        copy(mp.begin(),mp.end(),back_inserter(v));
        sort(v.begin(),v.end(),comp);
        for(int i = 0 ; i < v.size() ; ++i)
            for(int j = 0 ; j < v[i].second ; ++j)
                cout <<v[i].first<<" ";
        cout << endl;
	}
	return 0;
}
