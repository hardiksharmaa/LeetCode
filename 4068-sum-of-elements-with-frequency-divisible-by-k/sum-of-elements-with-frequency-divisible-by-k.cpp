class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int count=1;
        for(int i=1;i<=nums.size();i++){
            if (i<nums.size()&&nums[i]==nums[i - 1]){
                count++;
            }
            else{
                if(count%k==0){
                    ans+=nums[i-1]*count;
                }
                count=1;
            }
        }
        return ans;
    }
};