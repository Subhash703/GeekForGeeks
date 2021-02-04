/*
Given an ascending sorted rotated array Arr of distinct integers of size N. The array is right rotated K times. Find the value of K.
*/

#include <iostream>
using namespace std;

int countRotation(int arr[], int n){
	/*
		if the last element is greater than 1st, it means array is not rotated
	*/
	if(arr[n-1]>=arr[0]){
		return 0;
	}
	int count = 1,i = 1;
	bool found = 0;
	while(i<n && !found){
		if(arr[i]>arr[i-1]){
			count++;
			i++;
		}else{
			found = 1;
			break;
		}
	}
	return count;
}

int main() {
	// your code goes here {15, 18, 2, 3, 6, 12};
	int arr[] = {15, 18, 2, 3, 6, 12};
	cout<<countRotation(arr,6);
	return 0;
}
