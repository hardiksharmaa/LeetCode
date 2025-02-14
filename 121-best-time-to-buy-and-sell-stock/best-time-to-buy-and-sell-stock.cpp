class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximum=0;
        int minimum=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minimum=min(prices[i],minimum);
            maximum=max(maximum,prices[i]-minimum);
        }
        return maximum;
    }
};