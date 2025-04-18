class Solution {
public:
    int solve(vector<int>& nums){
        int prev=0;
        int prev1=nums[0];
        for(int i=1;i<nums.size();i++){
            int inc=nums[i]+prev;
            int exc=prev1;
            int ans=max(inc,exc);
            prev=prev1;
            prev1=ans;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int> first,last;
        for(int i=0;i<nums.size();i++){
            if(i!=nums.size()-1) first.push_back(nums[i]);
            if(i!=0) last.push_back(nums[i]);
        }
        return max(solve(first),solve(last));
    }
};