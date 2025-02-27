class Solution {
    public int maxProduct(int[] nums) {
        if (nums == null || nums.length == 0) return 0;
        int n = nums.length;
        int[] maxProduct = new int[n];
        int[] minProduct = new int[n];
        maxProduct[0] = nums[0];
        minProduct[0] = nums[0];
        int result = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] >= 0) {
                maxProduct[i] = Math.max(nums[i], nums[i] * maxProduct[i - 1]);
                minProduct[i] = Math.min(nums[i], nums[i] * minProduct[i - 1]);
            } else {
                maxProduct[i] = Math.max(nums[i], nums[i] * minProduct[i - 1]);
                minProduct[i] = Math.min(nums[i], nums[i] * maxProduct[i - 1]);
            }
            result = Math.max(result, maxProduct[i]);
        }
        return result;
    }
}