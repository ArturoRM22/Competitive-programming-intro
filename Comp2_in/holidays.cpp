#include<iostream>
#include<vector>
using namespace std;

int main(){
    int days;
    cin>>days;

    vector<vector<int>> acts(days, (vector<int>(3)));
    for(int i = 0; i < days; i++){
        for(int j = 0; j < 3; j++){
            cin>>acts[i][j];
            //cout << acts[i][j] << " ";
        }
    }

    vector<vector<int>> dp(days, (vector<int>(3)));

    dp[0][0] = acts[0][0];
    dp[0][1] = acts[0][1];
    dp[0][2] = acts[0][2];

    for(int i = 1; i < days; i++){
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + acts[i][0]; 
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + acts[i][1]; 
        dp[i][2] = max(dp[i - 1][1], dp[i - 1][0]) + acts[i][2]; 
    }
    cout << max(dp[days-1][0], max(dp[days-1][1], dp[days-1][2])) << endl;

    return 0; 
}



/* 
7
6 7 8
8 8 3
2 5 2
7 8 6
4 6 8
2 3 4
7 5 1

 */