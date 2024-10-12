class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];

        vector<int>skiphFirst(nums.begin()+1,nums.end());
        vector<int>skiphLast(nums.begin(),nums.end()-1);
        for(int i=0;i<nums.size()-1;i++){
            skiphFirst[i]=nums[i+1];
            skiphLast[i]=nums[i];
        }

        int loot1=helper(skiphFirst);
        int loot2=helper(skiphLast);

        return max(loot1,loot2);
    }

    int helper(vector<int> &nums){
        if(nums.size()==1) return nums[0];
        vector<int>dp(nums.size());
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);

        for(int i=2;i<nums.size();i++){
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        }
        return dp[nums.size()-1];
    }
};