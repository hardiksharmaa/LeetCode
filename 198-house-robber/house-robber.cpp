class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()<2) return nums[0];
        int prev=0;
        int prev1=nums[0];
        for(int i=2;i<=nums.size();i++){
            int skip=prev1;
            int steal=nums[i-1]+prev;
            int temp=max(steal,skip);
            prev=prev1;
            prev1=temp;
        }
        return prev1;
    }
};