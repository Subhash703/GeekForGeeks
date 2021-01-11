/*
Your Task:
You dont need to read input or print anything. Complete the function spirallyTraverse() that takes matrix, R and C as input parameters and returns a list of integers denoting the spiral traversal of matrix. 

Expected Time Complexity: O(R*C)
Expected Auxiliary Space: O(R*C)

Constraints:
2 <= R, C <= 100
0 <= matrixi <= 100

Input:
R = 3, C = 4  
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12}}
Output: 
1 2 3 4 8 12 11 10 9 5 6 7
Explanation:
Applying same technique as shown above, 
output for the 2nd testcase will be 
1 2 3 4 8 12 11 10 9 5 6 7.
*/

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int>res;
        int top = 0, left = 0, right = c-1, bottom = r-1;
        int size = c*r;
        while(left <= right && top<=bottom){
            for(int i = left; i<=right && res.size()<size; i++){
                // cout<<matrix[left][i]<<" ";
                res.push_back(matrix[top][i]);
            }
            top++;
            
            for(int i = top; i<=bottom && res.size()<size; i++){
                // cout<<matrix[i][right]<<" ";
                res.push_back(matrix[i][right]);
            }
            right--;
            
            for(int i = right; i>=left && res.size()<size; i--){
                // cout<<matrix[bottom][i]<<" ";
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
            
            for(int i = bottom; i>=top && res.size()<size; i--){
                // cout<<matrix[i][left]<<" ";
                res.push_back(matrix[i][left]);
            }
            left++;
        }
        
        return res;
    }
