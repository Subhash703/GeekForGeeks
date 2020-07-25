/*
For each test case, the output is the array after performing inverse permutation on A.

Constraints:
1<=T<=100
1<=n<=50
1<=A[i]<=50
Note: Array should contain unique elements and should have elements from 1 to n. 

Example:
Input:
3
4
1 4 3 2
5
2 3 4 5 1
5
2 3 1 5 4

Output:
1 4 3 2
5 1 2 3 4
3 1 2 5 4

1. For element 1 we insert position of 1 from arr1 i.e 1 at position 1 in arr2. For element 4 in arr1, we insert 2 from arr1 at position 4 in arr2. Similarly, 
for element 2 in arr1, we insert position of 2 i.e 4 in arr2.
*/
#include <iostream>
using namespace std;

void printReverse(int a[],int n){
    int a2[n];
    for(int i = 0; i<n; i++){
        a2[a[i]-1] = i+1;
    }
    for(int i = 0; i<n; i++){
        cout<<a2[i]<<" ";
    }
    cout<<endl;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t-- > 0){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i = 0; i<n; i++){
	        cin>>a[i];
	    }
	    printReverse(a,n);
	}
	return 0; 
}
