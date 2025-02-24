class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l = 0, r = arr.size();  // Binary search range
        while (l < r) {
            int mid = l + (r - l) / 2;
            int missingCount = arr[mid] - (mid + 1);  // How many numbers are missing before arr[mid]
            if (missingCount < k) {
                l = mid + 1;  // Move right
            } else {
                r = mid;  // Move left
            }
        }
        // The kth missing number is l + k
        return r + k;
    }
};