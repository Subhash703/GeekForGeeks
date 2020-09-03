void rotateMatrix(vector<vector<>>arr){
	/*
	1 2 3	  Transpose	1 4 7	                3 6 9
	4 5 6	==========> 2 5 8 ==============> 2 5 8
	7 8 9             3 6 9                 1 4 7
	*/
	// find the transpose of the matrix
	for(int i = 0; i<n; i++){
	    for(int j= i+1; j<n; j++){
	      swap(arr[i][j],arr[j][i]);
	    }
	}
	//reverse the row, row1 = rowlast
	int n = arr.size();
	for(int i = 0; i<n; i++){
		int low = 0, high = n-1;
		while(low<high){
			swap(arr[low][i],arr[high][i]);
			low++;
			high--;
		}
	}
}
