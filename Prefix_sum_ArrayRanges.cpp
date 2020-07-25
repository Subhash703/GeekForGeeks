// C++ program to find maximum occured element in 
// given N ranges. 
#include <bits/stdc++.h> 
#define MAX 1000000 
using namespace std; 

// Return the maximum occurred element in all ranges. 
int maximumOccuredElement(int L[], int R[], int n) 
{ 
	// Initalising all element of array to 0. 
	int arr[MAX]; 
	memset(arr, 0, sizeof arr); 

	// Adding +1 at Li index and substracting 1 
	// at Ri index. 
	int maxi=-1; 
	for (int i = 0; i < n; i++) { 
		arr[L[i]] += 1; 
		arr[R[i] + 1] -= 1; 
		if(R[i]>maxi){ 
			maxi=R[i]; 
		} 
	} 

	// Finding prefix sum and index having maximum 
	// prefix sum. 
	int msum = arr[0],ind; 
	for (int i = 1; i < maxi+1; i++) { 
		arr[i] += arr[i - 1]; 
		if (msum < arr[i]) { 
			msum = arr[i]; 
			ind = i; 
		} 
	} 

	return ind; 
} 

// Driven Program 
int main() 
{ 
	int L[] = { 1, 4, 9, 13, 21 }; 
	int R[] = { 15, 8, 12, 20, 30 }; 
	int n = sizeof(L) / sizeof(L[0]); 

	cout << maximumOccuredElement(L, R, n) << endl; 
	return 0; 
} 
