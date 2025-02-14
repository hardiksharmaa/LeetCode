class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int rob=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]) rob+=prices[i]-prices[i-1];
        }
        return rob;
        
    }
};