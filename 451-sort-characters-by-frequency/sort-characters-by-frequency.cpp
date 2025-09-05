class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char c: s){
            mp[c]++;
        }
        vector<pair<int,int>> bucket(mp.begin(),mp.end());

        sort(bucket.begin(),bucket.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });

        string ans="";
        for(auto &x: bucket){
            ans.append(x.second,x.first);
        }
        return ans;
    }
};