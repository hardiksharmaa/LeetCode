class Solution {
public:
    void backtrack(vector<int>& nums, vector<vector<int>>& res, vector<int>& temp){
        if(temp.size()==nums.size()){
            res.push_back(temp);
            return;
        }

        for(int x: nums){
            if(find(temp.begin(),temp.end(),x)!=temp.end()){
                continue;
            }
            temp.push_back(x);
            backtrack(nums,res,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        backtrack(nums,res,temp);
        return res;
    }
};