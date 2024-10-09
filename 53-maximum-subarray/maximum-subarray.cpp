class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
        int curr_max=nums[0];
        for(int i=1;i<nums.size();i++){
            curr_max=max(nums[i],nums[i]+curr_max);
            maxi=max(curr_max,maxi);
        }
        return maxi;
    }
};