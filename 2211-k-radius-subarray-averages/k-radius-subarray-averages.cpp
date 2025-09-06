class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int i=0;
        long long sum=0;
        if (k == 0) return nums;
        vector<int> ans(nums.size(),-1);
        if (2*k+1>nums.size()) return ans;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            if(j-i+1>2*k+1){
                sum-=nums[i];
                i++;
            }
            if(j-i+1==2*k+1){
                int ind=i+k;
                ans[ind]=sum/(2*k+1);
            }
        }
        return ans;
    }
};