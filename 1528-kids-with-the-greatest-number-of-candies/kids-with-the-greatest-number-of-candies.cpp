class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=INT_MIN;
        vector<bool> ans;
        for(int i=0;i<candies.size();i++){
            maxi=max(maxi,candies[i]);
        }
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extraCandies)>=maxi){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};