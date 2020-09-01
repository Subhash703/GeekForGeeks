/*
Ishaan is an adventurous guy. Today while wandering in a forest he found a cave. Bravely enough he enters the cave and finds some numbers carved on the walls of the cave which seemed to form a mysterious series.
But some of the numbers were missing. Now, Ishaan wants to complete the series. Help him find the Nth term of the series.
N    Nth term
1    5
2    10
3    26
4    50
5    122
.
.
.
10    842

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

void nthPrime(int n){
    int count = 0, j = 2;
    while(1){
        if(isPrime(j)){
            count++;
        }
        if(count==n){
            break;
        }
        j++;
    }
    // cout<<j<<endl;
    unsigned int result = j*j+1;
    cout<<result<<endl;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0){
	    int n;
	    cin>>n;
	    nthPrime(n);    
	}
	return 0;
}
