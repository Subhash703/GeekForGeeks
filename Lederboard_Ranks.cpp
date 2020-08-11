

#include <iostream>
using namespace std;

vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
    vector<int> res;
    int rank=1,n=int(scores.size()),m=int(alice.size()),j=0;
    for(int i=1;i<n;i++)
    {
        if(scores[i-1]!=scores[i])
        rank++;
    }
    for(int i=n-1;i>=0 && j<m;i--){
        if(alice[j]==scores[i]){
            res.push_back(rank);
            j++;i++;
            continue;
        }
        else if(alice[j]<scores[i]){
            res.push_back(rank+1);
            j++;i++;
            continue;
        }
        if(i>0 && scores[i-1]!=scores[i]){
            rank--;
        }
    }
    while(j<m){
        res.push_back(1);
        j++;
    }
    return res;
}

int main() {
	// your code goes here
  vector<int>scores = {};
  vector<int>alice = {};
	vector<int>result = climbingLeaderboard(scores,alice);
	return 0;
}
