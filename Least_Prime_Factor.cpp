/*
Given a number N, print least prime factors for all numbers from 1 to N.  The least prime factor of an integer N is the smallest prime number that divides it. The least prime factor of all even numbers is 2. A prime number is its own least prime factor (as well as its own greatest prime factor). 
Note : 1 needs to be printed for 1.

Input:
  2
  6
  10
Output:
  1 2 3 2 5 2
  1 2 3 2 5 2 7 2 3 2
*/

#include <bits/stdc++.h>
using namespace std;

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

int leastPrimeFactorForOdd(int x){
    for(int i = 2; i<=x; i++){
        if(isPrime(i))
            if(x%i==0){
                return i;
            }
    }    
}

int main() {
	//code
	
	int t;
	cin>>t;
	while(t-->0){
	    int n;
	    cin>>n;
	    cout<<1<<" "<<2<<" "<<3<<" "; 
	    for(int i = 4; i<=n; i++){
	        if(i%2==0){
	            cout<<2<<" ";
	        }else{
	            cout<<leastPrimeFactorForOdd(i)<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
