class Solution {
public:
    int trap(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int leftmax=0;
        int rightmax=0;
        int ans=0;
        while(l<=r){
            if(nums[l]<=nums[r]){
                if(nums[l]>=leftmax){
                    leftmax=max(leftmax,nums[l]);
                }
                else{
                    ans+=leftmax-nums[l];
                }
                l++;
            }
            else{
                if(nums[r]>=rightmax){
                    rightmax=max(rightmax,nums[r]);
                }
                else{
                    ans+=rightmax-nums[r];
                }
                r--;
            }
        }
        return ans;
    }
};