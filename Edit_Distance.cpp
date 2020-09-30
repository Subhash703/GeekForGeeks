/*
Given two strings s and t. Find the minimum number of operations that need to be performed on str1 to convert it to str2. The possible operations are:

Insert
Remove
Replace


We use DP here to solve this

*/


int editDistance(string s, string t)
		{
		    // Code here
		    int m = s.length(), n = t.length();
		    int dp[m+1][n+1];
		    for(int i = 0; i<=m ; i++){
		        for(int j = 0; j<=n; j++){
		            if(i == 0)
		                dp[i][j] = j;
		            else if(j == 0)
		                dp[i][j] = i;
		            else if(s[i-1] == t[j-1])   //If there is a match , take previous digonal elemnts
		                dp[i][j] = dp[i-1][j-1];
		            else
		                dp[i][j] = 1+min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);    //Chcek all the operation ,which give min 
		        }
		        
		    }
	     return dp[m][n];
		}
