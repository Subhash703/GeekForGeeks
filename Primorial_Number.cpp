/*
Premorial Number is the product of first N prime number just like factorial 
P#5 = (Primorial of 5) = 2*3*5*7*11 = 2310

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define module 10000000007

bool isPrime(int x){
    if(x == 1 || x == 0)
        return false;
    for(int i = 2; i<=sqrt(x); i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

void primorial(int n){
    ll result = 1;
    int count = 0;
    
    int j = 2;
    while(1){
        if(isPrime(j)){
            result = result*j;
            count++;
        }
        if(count == n){
            break;
        }
        j++;
    }
    result = result%module;
    cout<<result<<endl;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0){
	    int n;
	    cin>>n;
	    primorial(n);
	}
	return 0;
}
