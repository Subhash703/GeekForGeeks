
/*
Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

    { 15, -2, 2, -8, 1, 7, 10, 23 }
    { 15, 13, 15, 7, 8, 15, 25, 48 }
    { 0,  1,   2,  3, 4,  5,  6,  7 }
    
        - sum  = 15 => m[15] = 0;
        - sum = 13 => m[13] = 1;
        - sum = 15 => res = max(2, 1) => 2; m[15] = 2;
        - sum = 7 => m[7] = 3;
        - sum = 8 => m[8] = 4;
        - sum = 15 => res = max(5, 2) => 5; m[15] = 5;
        - sum = 25 => m[25] = 6;
        - sum = 48 => m[48] = 7;
        
    return 5
    */

int maxLen(int A[], int n)
{
    // Your code here
    int res  = 0;
    unordered_map<int, int> m;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + A[i];
        if(sum == 0)
            res = i+1;
        
        if(m.find(sum) != m.end())
        {
            res = max((i-(m.find(sum)->second)), res);
        }
        m.insert(make_pair(sum,i));
    }
    return res;
    
}
