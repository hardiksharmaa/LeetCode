class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int x: nums){
            mp[x]++;
        }
        int n=nums.size();
        vector<vector<int>> bucket(n+1);
        for(auto & pair: mp){
            bucket[pair.second].push_back(pair.first);
        }
        vector<int> ans;
        for(int i=n;i>=0;i--){
            for(int num: bucket[i]){
                if(ans.size()==k){
                    break;
                }
                ans.push_back(num);
            }
        }
        return ans;
    }
};