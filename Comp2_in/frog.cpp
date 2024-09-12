#include<iostream>
#include<vector>
using namespace std;

int main() {
    int stones_len;
    cin >> stones_len;
    
    vector<int> stones(stones_len);
    for (int i = 0; i < stones_len; i++) {
        cin >> stones[i];
    }
    
    if (stones_len == 1) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> dp(stones_len);
    dp[0] = 0; 
    dp[1] = abs(stones[1] - stones[0]); 
    for (int i = 2; i < stones_len; i++) {
        int jump_one = dp[i-1] + abs(stones[i] - stones[i-1]);
        int jump_two = dp[i-2] + abs(stones[i] - stones[i-2]);
        dp[i] = min(jump_one, jump_two);
    }

    cout << dp[stones_len - 1] << endl;
    
    return 0;
}
