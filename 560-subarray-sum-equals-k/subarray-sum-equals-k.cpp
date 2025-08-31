class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prefix(nums.size()+1);
        for(int i=1;i<=nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i-1];
        }

        unordered_map<int,int> mp;
        int count=0;
        mp[0]=1;
        for(int i=1;i<prefix.size();i++){
            int target=prefix[i]-k;
            if(mp.find(target)!=mp.end()){
                count+=mp[target];
            }
            mp[prefix[i]]++;
        }
        return count;
    }
};