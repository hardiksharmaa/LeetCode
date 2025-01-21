class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        backtrack(result,0,subset,nums);
        return result;
    }

    void backtrack(vector<vector<int>>& result,int index, vector<int>& subset, vector<int>& nums ){
        if(index==nums.size()){
            result.push_back(subset);
            return;
        }

        subset.push_back(nums[index]);
        backtrack(result,index+1,subset,nums);

        subset.pop_back();
        backtrack(result,index+1,subset,nums);
    }
};