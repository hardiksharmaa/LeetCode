class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=0;
        int maxi=0;
        unordered_set<int> mp; 
        while(j<nums.size()){
            if(mp.find(nums[j])==mp.end()){
                mp.insert(nums[j]);
                sum+=nums[j];
                maxi=max(maxi,sum);
                j++;
            }
            else{
                mp.erase(nums[i]);
                sum-=nums[i];
                i++;
            }
        }
        return maxi;
    }
};