class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long maxi = *max_element(nums.begin(),nums.end());
        long long mini = *min_element(nums.begin(),nums.end());
        long long diff = maxi - mini;
        return (long long)k * (long long) diff;
    }
};