/*
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
https://medium.com/@rsinghal757/kadanes-algorithm-dynamic-programming-how-and-why-does-it-work-3fd8849ed73d
*/

#include <iostream>
using namespace std;
#define INT_MIN -10000009

int findKadaneMax(int a[], int n){
    int local_max = 0;
    int global_max = INT_MIN;
    // local_max = max(a[i],a[i]+local_max);
    
    for(int i = 0; i<n; i++){
        local_max = max(a[i],a[i]+local_max);
        if(local_max > global_max){
            global_max = local_max;
        }
    }
    return global_max;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++){
	        cin>>arr[i];
	    }
	    cout<<findKadaneMax(arr,n)<<endl;
	}
	return 0;
}
