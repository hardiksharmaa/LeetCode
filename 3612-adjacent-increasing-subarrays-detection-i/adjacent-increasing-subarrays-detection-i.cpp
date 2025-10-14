class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> inc(n,1);//1,2,3,4,5,1,2,3,1,2
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                inc[i]=inc[i-1]+1;
            }
            else inc[i]=1;
        }
        for(int i=0;i<n;i++){
            if(inc[i]>=k){
                int prevind=i-k;//-1
                if(prevind>=0 && inc[prevind]>=k){
                    return true;
                }
            }
        }
        return false;
    }
};