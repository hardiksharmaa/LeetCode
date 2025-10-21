class Solution {
public:
    void backtrack(vector<int>& nums, vector<int>& temp, vector<vector<int>>& res,vector<bool>& vis){
        if(temp.size()==nums.size()){
            res.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(vis[i]) continue;
            if(i>0 && nums[i]==nums[i-1] && !vis[i-1]){
                continue;
            }
            vis[i]=true;
            temp.push_back(nums[i]);
            backtrack(nums,temp,res,vis);
            temp.pop_back();
            vis[i]=false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> res;
        vector<bool> vis(nums.size(),false);
        sort(nums.begin(),nums.end());
        backtrack(nums,temp,res,vis);
        return res;
    }
};