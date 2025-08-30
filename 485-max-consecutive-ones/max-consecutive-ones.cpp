class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int ans=0;
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==1){
                count++;
                ans=max(ans,count);
            }
            else if(nums[j]==0){
                ans=max(ans,count);
                count=0;
            }
        }
        return ans;
    }
};