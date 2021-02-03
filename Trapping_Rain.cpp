/*
Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, 
compute how much water can be trapped between the blocks during the rainy season. 
 Input:
N = 6
arr[] = {3,0,0,2,0,4}
Output:
10
*/

int trappingWater(int arr[], int n){

    // Your code here
    // Your code here
    // int leftm[] = {3,3,3,3,3,4};
    // int right[] = {4,4,4,4,4,4};
    int l[n],r[n];
    l[0] = arr[0];
    r[n-1] = arr[n-1];
    for(int i = 1; i<n; i++){
        l[i] = max(l[i-1],arr[i]);
        r[n-i-1] = max(r[n-i],arr[n-i-1]);
    }
    int water = 0;
    for(int i = 1; i<n-1; i++){
        water += min(l[i],r[i])-arr[i];
    }
    
    return water;
    /*
    arr = [1 1 5 2 7 6 1 4 2 3]
    l = [1 1 5 5 7 7 7 7 7 7];
    r = [3];
    water += 5-5
    */
}
