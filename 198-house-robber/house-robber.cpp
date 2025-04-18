class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()<2) return nums[0];
        int prev2=0;
        int prev1=nums[0];
        for(int i=1;i<nums.size();i++){
            int inc=prev2+nums[i];
            int exc=prev1;
            int ans=max(inc,exc);
            prev2=prev1;
            prev1=ans;
        }
        return prev1;
    }
};