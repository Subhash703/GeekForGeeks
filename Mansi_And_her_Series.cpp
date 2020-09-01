/*
series : 3 8 18 32 60  ..................... 300(10th)
find Nth term of the series
1<=N<=6000

=====> The logic is that nth term is product of N and (nth prime+1)
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
int nthPrime(int n){
    int j = 2,count = 0;
    
    while(1){
        if(isPrime(j)){
            count++;
        }
        if(count==n){
            break;
        }
        j++;
    }
    return j;
}

void nthNumberOfSeries(int n){
     cout<<n*(nthPrime(n)+1)<<endl;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0){
	    int n;
	    cin>>n;
	    nthNumberOfSeries(n);
	}
	return 0;
}
