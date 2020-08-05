/*
Given an array of positive integers. Your task is to find the leaders in the array.
Note: An element of array is leader if it is greater than or equal to all the elements to its right side. Also, the rightmost element is always a leader. 
*/

#include <iostream>
#include<stack>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i = 0; i<n; i++){
	        cin>>a[i];
	    }
	    
	    int j = n-2, currMax = a[n-1];
	    stack<int>s;
	    int i = 0;
	    s.push(a[n-1]);
	    while(j>=0){
	        if(a[j]>=currMax){
	           s.push(a[j]);
	           currMax = a[j];
	        }
	        j--;
	    }
	    
	    while(!s.empty()){
	        cout<<s.top()<<" ";
	        s.pop();
	    }
	    cout<<endl;
	    
	}
	return 0;
}
