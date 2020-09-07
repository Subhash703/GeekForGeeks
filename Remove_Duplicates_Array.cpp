/*
Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

*/
int removeDuplicates(vector<int>& arr) {
        int len =arr.size();
        if(arr.size()<1)
            return 0;
        
        int cur = 0;
        arr[cur] = arr[0];
        for(int i = 1; i<len; i++){
            if(arr[i]!=arr[cur]){
                cur++;
                arr[cur] = arr[i];
            }
        }        
        return cur+1;
  }
  //---------- Time O(N) & Space O(1) : best way to remove all duplicates from array---------------
