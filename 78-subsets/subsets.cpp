class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;

        backTrack(result,subset,0,nums);
        return result;
    }
    void backTrack(vector<vector<int>> &result, vector<int> &subset, int index,vector<int> & nums){

        if(index==nums.size()){
            result.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        backTrack(result,subset,index+1,nums);

        subset.pop_back();
        backTrack(result,subset,index+1,nums);
    }
};
