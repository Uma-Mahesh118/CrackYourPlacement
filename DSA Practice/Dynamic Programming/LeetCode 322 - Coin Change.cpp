class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;

        for(int i = 1; i< amount+1; i++) {
            for(int j=0; j<coins.size(); j++) {
                if(coins[j] <= i ) {
                    if(dp[i - coins[j]] == INT_MAX) continue;
                    dp[i] = min(dp[i], 1+ dp[ i-coins[j] ]);
                }
            }
        }
        
        if(dp[amount] == INT_MAX) return -1;
        return dp[amount];
    }
};
