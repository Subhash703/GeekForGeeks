/*
Given a matrix of size N x N. Print the elements of the matrix in the snake like pattern depicted below.
matrix = [[1,2,3,4],
          [5,6,7,8],
          [9,10,11,12],
          [13,14,15,16]]
   O/P = [1,2,3,4,8,7,6,5,9,10,11,12,16,15,14,13]
   
   => We print even rows as left to right and odd rows from right to left
*/

vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int>ans;
        int cols = matrix[0].size();
        int rows = matrix.size();
        for(int i = 0; i<rows;i++){
            if(i%2==0){
                for(int j = 0; j<cols; j++){
                    ans.push_back(matrix[i][j]);
                }
            }
            else{
                for(int j = cols-1; j>=0;j--){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
