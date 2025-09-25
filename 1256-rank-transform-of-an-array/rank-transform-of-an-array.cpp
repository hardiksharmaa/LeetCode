class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> mp;
        vector<int> nums(arr.begin(),arr.end());
        sort(nums.begin(),nums.end());
        int rank=1;
        for(int x: nums){
            if(mp.find(x)==mp.end()){
                mp[x]=rank;
                rank++;
            }
        }
        vector<int> ans;
        for(int x: arr){
            ans.push_back(mp[x]);
        }
        return ans;
    }
};