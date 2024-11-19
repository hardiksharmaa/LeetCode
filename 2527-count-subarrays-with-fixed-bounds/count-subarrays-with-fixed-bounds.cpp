class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int minpos=-1;
        int maxpos=-1;
        int culpritind=-1;
        long long ans;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK || nums[i]>maxK){
                culpritind=i;
            }
            if(nums[i]==minK) minpos=i;
            if(nums[i]==maxK) maxpos=i;
            long long smaller=min(minpos,maxpos);
            long long temp=smaller-culpritind;
            ans+=(temp<=0)?0:temp;
        }
        return ans;
    }
};