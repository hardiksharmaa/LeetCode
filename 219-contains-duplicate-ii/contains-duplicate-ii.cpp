class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0;
        if(k==0) return false;
        int n=nums.size();
        while(i<n){
            int j=i+1;
        while(j<=i+k&&j<n){
            if(nums[i]==nums[j]){
                return true;
            }
            j++;
        }
        i++;
    }
    return false;
    }
};