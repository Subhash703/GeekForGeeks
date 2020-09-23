/*
Given two arrays A1[] and A2[] of size N and M respectively. The task is to sort A1 in such a way that the relative order among the elements will be same as those in A2. For the elements not present in A2, append them at last in sorted order. It is also given that the number of elements in A2[] are smaller than or equal to number of elements in A1[] and A2[] has all distinct elements.
Note: Expected time complexity is O(N log(N)).
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0){
	    int n,m;
	    cin>>n>>m;
	    int a1[n],a2[m];
	    map<int,int>mp;
	    for(int i = 0; i<n; i++){
	        cin>>a1[i];
	        mp[a1[i]]++;
	    }
      for(int i = 0; i<m; i++){
	        cin>>a2[i];
	    }
	    for(int i = 0; i<m; i++){
	        if(mp[a2[i]]!=0){
	            for(int j = 0; j<mp[a2[i]]; j++){
	                cout<<a2[i]<<" ";
	            }
	            mp[a2[i]] = -1;
	        }
	    }
	    for(auto i = mp.begin(); i!=mp.end(); i++){
	        if(i->second > 0){
	            for(int j = 0; j<i->second; j++){
	                cout<<i->first<<" ";
	            }
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
