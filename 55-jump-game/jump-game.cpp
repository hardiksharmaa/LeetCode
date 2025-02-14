class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int coverage=0;
        for(int i=0;i<n;i++){
            if(i>coverage) return false;
            coverage=max(coverage,i+nums[i]);
            if(coverage>=n-1) return true;
        }
        return false;

    }
};