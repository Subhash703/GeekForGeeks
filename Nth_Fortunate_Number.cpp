/*
Given an integer n, find the nth Fortunate Number.
A Fortunate number is the smallest integer m > 1 such that, for a given positive integer n, pn + m is a prime number. Here pn is the product of the first n prime numbers, i.e prime factorials (or primorials) of order n.
*/
#include <bits/stdc++.h>
using namespace std;
#define long long int
#define module 10000000007

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

int productOfFirstNprims(int n){
    int product = 1;
    int j = 2,count=0;
    while(1){
        if(isPrime(j)){
            product=(product*j ) %module;// % 1000000007;
            count++;
        }
        if(count==n)
            break;
        j++;
    }
    return product;
}

void findNthFortunateNumber(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int pn = productOfFirstNprims(n);
        int m = 2;
        while(true){
            if(isPrime(pn+m)){
                cout<<m<<endl;
                break;
            }else{
                m++;
            }
        }

    }
}



int main() {
	//code
	findNthFortunateNumber();
	return 0;
}
