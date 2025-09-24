class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int ans=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans=nums[i];
                j=i;
                break;
            }
        }

        for(int i=j+1;i<nums.size();i++){
            if(nums[i]%2==0){
                ans|=nums[i];
            }
        }
        return ans;
    }
};