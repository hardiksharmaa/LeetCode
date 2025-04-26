class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int count = 0;
        int sum = 0;

        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }
        if (sum >= threshold * k) {
            count++;
        }
        for (int i = k; i < n; i++) {
            sum += arr[i] - arr[i - k];
            if (sum >= threshold * k) {
                count++;
            }
        }
        return count;
    }
};