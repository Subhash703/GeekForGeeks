#include <iostream>
using namespace std;


// For worst case the time complexity for insertition sort is O(n^2)
void insertitionSort(long arr[],int n){
	for(long i = 1; i<n; i++){
		long key = arr[i], j = i-1;
		
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

int main() {
	// your code goes here
	long n;
	cin>>n;
	long arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	insertitionSort(arr, n);
	int dist = 1;
	for(int j = 1; j<n; j++){
		if(arr[j]!=arr[j-1]){
			dist++;
		}
	}
	cout<<dist<<endl;
	return 0;
}


// ********** Time complexity for this algorithm is O(N^2) , complexity function f(n) = k*n^2 + C*n
