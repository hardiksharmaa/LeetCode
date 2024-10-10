class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        backtrack(result, temp, nums);
        return result;
    }
    private:
    void backtrack(vector<vector<int>>& result, vector<int>& temp, vector<int>& nums) {

        if (temp.size() == nums.size()) {
            result.push_back(temp);
            return;
        }
        for (int number : nums) {
            if (find(temp.begin(), temp.end(), number) != temp.end()) 
                continue;

            temp.push_back(number);
            backtrack(result, temp, nums);
            temp.pop_back();
        }
    }
};