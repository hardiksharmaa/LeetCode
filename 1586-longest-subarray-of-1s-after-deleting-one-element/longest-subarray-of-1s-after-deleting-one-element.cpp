class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count=0;
        int i=0;
        int ans=-1;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==0){
                count++;
            }
            while(count>1){
                if(nums[i]==0){
                    count--;
                }
                i++;
            }
            ans=max(ans,j-i);
        }
        return ans;
    }
};