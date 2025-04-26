class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int> starts,ends;
        for(auto& x: flowers){
            starts.push_back(x[0]);
            ends.push_back(x[1]);
        }
        sort(starts.begin(),starts.end());
        sort(ends.begin(),ends.end());
        vector<int> ans;
        for(int time: people){
            int bloomstart=upper_bound(starts.begin(),starts.end(),time)-starts.begin();
            int bloomend=lower_bound(ends.begin(),ends.end(),time)-ends.begin();
            ans.push_back(bloomstart-bloomend);
        }
        return ans;
    }
};