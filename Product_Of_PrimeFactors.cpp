/*
Given a number N find the product of all unique prime factors of that number.
Example:
  Input:
  2
  10
  25
  Output:
  10
  5

*/
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n==0 || n==1 )
        return false;
    for(int i = 2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int productOfFactors(int n){
    int product = 1;
    for(int i = 2; i<= n; i++){
        if(isPrime(i)){
            if(n%i==0){
                product = product*i;
            }
        }
    }
    return product;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0){
	    int n;
	    cin>>n;
	    cout<<productOfFactors(n)<<endl;
	}
	return 0;
}
