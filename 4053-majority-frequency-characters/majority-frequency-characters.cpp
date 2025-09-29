class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        int maxi=0;
        string ans="";
        int maxFreq = 0;
        for (auto& [key, value]:mp) {
            maxFreq = max(maxFreq,value);
        }
        vector<vector<char>> bucket(maxFreq + 1);
        for(auto& [key,value]:mp){
            bucket[value].push_back(key);
        }
        int n=bucket.size();
        for(int i=n-1;i>=0;i--){
            if(bucket[i].size()>maxi){
                maxi=bucket[i].size();
                ans.clear();
                for(char c:bucket[i]){
                    ans+=c;
                }
            }
        }
        return ans;
    }
};