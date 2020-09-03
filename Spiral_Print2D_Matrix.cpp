
void spiralMatrix(vector<vector>>&arr){
	int top = 0, bottom = arr.size()-1, left = 0, right = arr[0].size();
	
	while(top<=bottom && left<= right){
		for(int i = left; i<= right; i++){
			cout<<arr[top][i]<<" ";
		}
		top++;
		for(int i = top; i<= bottom; i++){
			cout<<arr[i][right]<<" ";
		}
		right--;
		for(int i = right; i>=left; i--){
			cout<<arr[bottom][i]<<" ";
		}
		bottom--;
		for(int i = bottom; i>= top; i--){
			cout<<arr[i][left]<<" ";
		}
		left++;
	}
}
