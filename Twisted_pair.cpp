/*
A number is said to be twisted prime if it is a prime number and reverse of the number is also a prime number.
Exi : 
Input :
  2
  97
  43

Output:
  Yes
  No
*/

#include <iostream>
#include<algorithm>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int reverse(int n){
    int res = 0;
    while(n!=0){
        int tmp = n%10;
        res = res*10+tmp;
        n = n/10;
    }    
    return res;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0){
	    int n;
	    cin>>n;
	    
	    int rev = reverse(n);
	    if(isPrime(n) && isPrime(rev)){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
