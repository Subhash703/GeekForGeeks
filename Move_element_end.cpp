/*
  Given an array A of positive integers. Push all the zero’s of the given array to the end of the array. while maitaining the order of non-zero elements.
Input:
2
5
3 5 0 0 4
4
0 0 0 4

Output:
3 5 4 0 0
4 0 0 0


*/
#include <iostream>
using namespace std;

void moveZero(int a[], int n){
    int i = 0, j = n-1;
    while(i<j){
        while(i<j && a[j] == 0){
            j--;
        }
        if(a[i]==0){
            swap(a[i],a[j]);
        }
        i++;
    }
    for(int i = 0; i<n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
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
	    moveZero(a,n);
	}
	return 0;
}
