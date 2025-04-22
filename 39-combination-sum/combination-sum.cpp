class Solution {
public:
    void backtrack(vector<int>& candidates,int target, vector<vector<int>>& ans, vector<int>& ds, int ind){
        if(ind==candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            backtrack(candidates,target-candidates[ind],ans,ds,ind);
            ds.pop_back();
        }
        backtrack(candidates,target,ans,ds,ind+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        backtrack(candidates,target,ans,ds,0);
        return ans;
    }
};