class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // If mid element is greater than high, then min is in the right half
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } 
            // Otherwise, min is in the left half (including mid)
            else {
                high = mid; 
            }
        }

        // The minimum element is at index `low`
        return nums[low];
    }
};