#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    int stones_len, max_jumps;
    cin >> stones_len >> max_jumps; 
    
    vector<int> stones(stones_len);
    for (int i = 0; i < stones_len; i++) {
        cin >> stones[i];
    }
    
    vector<int> dp(stones_len, INT_MAX); 
    dp[0] = 0; 
    
    for (int i = 1; i < stones_len; i++) {
        for (int j = 1; j <= max_jumps; j++) {
            if (i - j >= 0) {
                dp[i] = min(dp[i], dp[i-j] + abs(stones[i] - stones[i-j]));
            }
        }
    }

    cout << dp[stones_len - 1] << endl; 
    
    return 0;
}
