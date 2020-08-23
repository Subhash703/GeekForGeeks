/*
if(arr[i] > arr[i+1]) if i < j;
we make two sorted arrays, left and right . apply merge function of merget sort which uses 2 pointers i and j.  
we update the result by n1-i where n1 is the length of the first array.
*/

#include <bits/stdc++.h>
using namespace std;

void arrayInversion(int nums[], int l, int mid, int r){
    int n1 = mid-l+1, n2 = r-mid;
    int left[n1], right[n2];
    for(int i = 0; i<n1; i++) {
        left[i] = nums[i];
    }
    for(int i = 0; i<n2; i++) {
        right[i] = nums[mid+1+i];
    }
    int i = 0, j = 0, k=l,res = 0;
    
    int temp[n1+n2];
    while(i<n1 && j<n2){
        if( left[i] <= right[j]) {
            temp[k] = left[i]; 
            i++;
        }
        else{
            temp[k] = right[j]; 
            j++;
            res += n1-i;
            /*
            left => [2,5,8,11]
            right=> [3,6,9,13]
            res = 0; left[1]>right[0]=> res+=n1-i =>res = 4-1=3;
            
            */
        }
        k++;
    }
    cout<<"The total Inversions in array are :"<<res<<endl;
}

int main() {
	// your code goes here
	int arr[] = {2,5,8,11,3,6,9,13};
	int n = sizeof(arr)/sizeof(arr[0]);
	int mid = (n-1-0)/2;
	arrayInversion(arr,0,mid,n-1);
	return 0;
}
