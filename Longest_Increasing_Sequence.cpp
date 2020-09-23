/*
The task is to find the length of the longest subsequence in a given array of integers such that all elements of the subsequence are sorted in strictly ascending order. This is called the Longest Increasing Subsequence (LIS) problem.

For example, the length of the LIS for  is  since the longest increasing subsequence is .
*/
int longestIncreasingSubsequence(vector<int> arr) {
    int n = arr.size();
    int lis[n];
    for(int i = 0; i<n; i++){
        lis[i] = 1;
    }
    
    //int arr[7] = {4,5,7,8,9,35,6};
    
    //        lis = {1,1,1,1,1,1,1}
    //              {1,}
    
    for(int i = 1; i<n; i++){
        for(int j = 0; j<i; j++){
            if(arr[i]>+arr[j] && lis[i]<lis[j]+1)
                lis[i] = lis[j]+1;
        }
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(ans<lis[i]){
            ans = lis[i];
        }
        cout<<lis[i]<<" ";
    }
    return ans;
}
