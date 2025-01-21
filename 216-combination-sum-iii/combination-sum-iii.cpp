class Solution {
public:
    void backtrack(vector<vector<int>>& ans, vector<int>& ds,int ind,vector<int>& nums,int k,int n){
        if(ds.size()==k && n==0){
            ans.push_back(ds);
            return;
        }

        for(int i=ind;i<nums.size();i++){
            if(i>ind&& nums[i]==nums[i-1]) continue;
            if(nums[i]>n) break;

            ds.push_back(nums[i]);
            backtrack(ans,ds,i+1,nums,k,n-nums[i]);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> nums={1,2,3,4,5,6,7,8,9};
        backtrack(ans,ds,0,nums,k,n);
        return ans;
    }
};