class Solution {
public:
    int solve(int a,int b,vector<int>& nums){
        if(a==b) return nums[a];
        int start=nums[a]-solve(a+1,b,nums);
        int end=nums[b]-solve(a,b-1,nums);
        return max(start,end);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        return solve(0,n-1,nums)>=0;
    }
};