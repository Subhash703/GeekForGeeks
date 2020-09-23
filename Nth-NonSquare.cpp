/*
To do this we have two ways :

Mathmatical way is to find the direct n + floor(0.5+sqrt(n));
*/

#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int n){
	float x = sqrt(n);
	return !(x-floor(x));
}

int main() {
	// your code goes here
	// To find the Nth non - square number
	int n;
	cin>>n;
	int index = 0;
	int cnt=0;
	/*while(cnt<n){
		if(!isPerfectSquare(++index))
			cnt++;
	}
	*/
	//cout<<"Nth non-square = "<<index<<endl;
	
	// BEST way to solve it => O(1)
	// n=n+floor(1/2 + sqrt(n));
	
	cout<<n+floor(0.5+sqrt(n));
}
