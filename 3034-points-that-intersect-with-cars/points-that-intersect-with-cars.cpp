class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        set<int> covered;
        for(auto& num: nums){
            for(int i=num[0];i<=num[1];i++){
                covered.insert(i);
            }
        }
        return covered.size();
    }
};