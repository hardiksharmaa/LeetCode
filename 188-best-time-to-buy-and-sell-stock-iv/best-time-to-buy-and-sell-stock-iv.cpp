class Solution {
    public:
        // state dp[i][0] = buying price ; dp[i][1] = profit of ith trade;
            int maxProfit(int k, vector<int>& prices) {
                    int n = prices.size();
                            if(k == 0)  return 0;
                                    vector<vector<int>> dp(k,vector<int>(2,0));
                                            for(int i = 0; i < k; i++){
                                                        dp[i][0] = INT_MAX;
                                                                    dp[i][1] = INT_MIN;          
                                                                            }
                                                                                    for(int i = 0; i < n; i++){
                                                                                                dp[0][0] = min(dp[0][0], prices[i]);
                                                                                                            dp[0][1] = max(dp[0][1], prices[i] - dp[0][0]);
                                                                                                                        for(int j = 1; j < k; j++){
                                                                                                                                        dp[j][0] = min(dp[j][0], prices[i] - dp[j-1][1]);
                                                                                                                                                        dp[j][1] = max(dp[j][1], prices[i] - dp[j][0]);
                                                                                                                                                                    }
                                                                                                                                                                            }
                                                                                                                                                                                    return dp[k-1][1];
                                                                                                                                                                                        }
                                                                                                                                                                                        };
