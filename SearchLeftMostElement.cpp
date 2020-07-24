#include<iostream>
using namespace std;

int binarySearch(int a[]){
	int n = sizeof(a) / sizeof(a[0]);
	int l = 0;
	int r = n-1;
	while (l<r){
		int mid = (l+r)/2;
		if(a[mid]==4 && a[mid-1]!=4)
			return mid;
		else if(a[mid]>4)
			r = mid-1;
		else
			l = mid+1;
	}
	return -1;
}
void insertionSort(int arr[]){
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 1; i < n; ++i) { 
            int key = arr[i]; 
            int j = i - 1; 
  
            /* Move elements of arr[0..i-1], that are 
               greater than key, to one position ahead 
               of their current position */
            while (j >= 0 && arr[j] > key) { 
                arr[j + 1] = arr[j]; 
                j = j - 1; 
            } 
            arr[j + 1] = key; 
    } 
}

int main(){
    int arr[] = {3,1,1,4,5,4,4,4,4,};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    insertionSort(arr);
    for(int i = 0; i<n; i++){
    	cout<<arr[i]<<" ";	
	}
//    findLeftMost(arr);
	cout<<"Left Most index of 4 is :"<<binarySearch(arr);
    return 0;
}
