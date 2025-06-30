class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto& i: nums){
            mp[i]++;
        }
        int maxi=0;
        for(auto& [key,value] : mp){
            if(mp.find(key+1)!=mp.end()) maxi=max(maxi,value+mp[key+1]);
        }
        return maxi;
    }
};