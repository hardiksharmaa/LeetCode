class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;

        int n = nums.size();
        vector<int> maxProduct(n), minProduct(n);
        
        // Initialize first element
        maxProduct[0] = nums[0];
        minProduct[0] = nums[0];
        int result = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] >= 0) {
                maxProduct[i] = max(nums[i], nums[i] * maxProduct[i - 1]);
                minProduct[i] = min(nums[i], nums[i] * minProduct[i - 1]);
            } else {
                maxProduct[i] = max(nums[i], nums[i] * minProduct[i - 1]);
                minProduct[i] = min(nums[i], nums[i] * maxProduct[i - 1]);
            }
            result = max(result, maxProduct[i]);
        }

        return result;
    }
};
