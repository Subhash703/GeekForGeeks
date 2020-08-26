/*

*/

//Code By Rishi_Mohan_Jha

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n<=1)return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
 {
	int n,t;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(int i=3;i<n;i+2)
	    {
	        if(isPrime(i)==1 && isPrime(n-i)==1)
	          {cout<<i<<" "<<(n-i)<<endl;break;}
	    }
	}
	
	return 0;
}
