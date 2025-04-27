class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int left=0;
        int ans=0;
        int product=1;
        for(int right=0;right<nums.size();right++){
            product*=nums[right];
            while(product>=k){
                product/=nums[left];// updating the product
                left++;// shrinking the window
            }
            ans+=(right-left+1);
        }
        return ans;
    }
};