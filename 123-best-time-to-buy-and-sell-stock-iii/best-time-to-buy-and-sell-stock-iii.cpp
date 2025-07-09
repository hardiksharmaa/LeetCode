class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        vector<int> diff1(n,0);
        int mini = prices[0];
        int ans = 0;
        for(int i=1;i<n;i++) {
            mini = min(mini,prices[i]);
            ans = max(ans,prices[i]-mini);
            diff1[i] = ans;
        }
        vector<int> diff2(n,0);
        int maxi = prices[n-1];
        ans = 0;
        for(int i=n-2;i>=0;i--) {
            maxi = max(maxi,prices[i]);
            ans = max(ans,maxi-prices[i]);
            diff2[i] = ans;
        }

        ans = 0;
        for(int i=0;i<n-1;i++) {
            ans = max(ans,diff1[i]+diff2[i+1]);
        }

        ans=  max(ans,max(diff2[0],diff1[n-1]));

        return ans;
        
    }
};