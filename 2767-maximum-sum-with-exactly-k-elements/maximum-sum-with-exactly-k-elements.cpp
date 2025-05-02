class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        int sum=0;
        while(k>0){
            sum+=maxi;
            maxi++;
            k--;
        }
        return sum;
    }
};