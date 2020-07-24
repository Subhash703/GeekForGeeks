#include<iostream>
using namespace std;

int main(){
	int arr[] = {-1,-1,-1,-1,-1100,-1101,-1102,-9001};
	int i = 1;
	int n = sizeof(arr)/sizeof(arr[0]);
	while( i < n && arr[i] == arr[i-1] ){
		i++;
	}
	if(arr[i]<arr[i-1]){
		i++;
		while(i < n){
			if(arr[i]>arr[i-1]){
				cout<<"Not Monotonic"<<endl;
				break;
			}
			i++;
		}
		if(i == n)
			cout<<"Array Is Monotonic"<<endl;
	}
	else{
		while(i < n){
			if(arr[i]<arr[i-1]){
				cout<<"Not Monotonic"<<"\n";
				break;
			}
			i++;
		}
		if(i == n)
			cout<<"Array is Monotonic"<<endl;
	}
	return 0;
}
