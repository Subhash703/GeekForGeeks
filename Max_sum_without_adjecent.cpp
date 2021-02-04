

#include<bits/stdc++.h>
using namespace std;
 
int maxSumWithoutAdjecent(int arr[],int n){
	int first = arr[0];
	int second = arr[1];
	for(int i = 2; i<n; i++){
		arr[i] = max(second,first+arr[i]);
		first = arr[i-1];
		second = arr[i];
	}
	return max(arr[n-2],arr[n-1]);
}
 
int main() {
	// your code goes here
	int arr[] = {5, 5, 10, -100, 10, 5};
	// int arr[] = {1, 2, 3,2,2,2};
  int n = sizeof(arr)/sizeof(arr[0]);
	cout<<maxSumWithoutAdjecent(arr,6)<<endl;
	return 0;
}
