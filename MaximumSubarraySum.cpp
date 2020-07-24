#include<iostream>
#include<vector>
using namespace std;

int main(){
	int arr[] = {1,8,30,-25,5,2,87,-5,20,-2};
	int k = 4;
	int n = sizeof(arr)/sizeof(arr[0]);
	if(n<k)
		return 0;
	int sum = 0;
	
	vector<int>v(k);
	for(int i = 0; i<k; i++){
		sum +=arr[i];	
	}
	int s = 0;
	int e = k-1;
	int res = sum;
	while(s<n-k){
		s++;
		e = s+k-1;
		sum = sum-arr[s-1]+arr[e];
		res = max(res,sum);
	}
	cout<<"Max subarray sum is :"<<res<<endl;
	return 0;
}
