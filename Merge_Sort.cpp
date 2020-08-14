#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
#define FOR(n) 			for(int i = 0; i<n; i++)
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define uom				unordered_map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
void merge(int arr[], int l, int m, int r){
    int n1 = m-l+1, n2 = r-m;
    int left[n1], right[n2];

    for(int i = 0; i<n1; i++){
        left[i] = arr[i];
    }
    for(int i = 0; i<n2; i++){
        right[i] = arr[m+1+i];
    }
    int i = 0, j = 0, k = l;
    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k++] = left[i++];
        }
        else{
            arr[k++] = right[j++];
        }
    }
    while(i<n1){
        arr[k++] = left[i++];
    }
    while(j<n2){
        arr[k++] = left[j++];
    }
    
}
void mergeSort(int a[], int l, int r){
    if(l<r){
        int m = l+(r-l)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}


int32_t main()
{
    c_p_c();
    
    int n;
    cin>>n;
    int a[n];
    FOR(n)
    {
        cin>>a[i];
    }
    mergeSort(a,0,n-1);

    FOR(n){
        cout<<a[i]<<" ";
    }
    return 0;
}
