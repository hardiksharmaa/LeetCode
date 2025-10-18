class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); 
        unordered_set<int> st;
        int lastUsed = INT_MIN; 
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            int place = max(x - k, lastUsed + 1);
            if (place <= x + k) {
                st.insert(place);
                lastUsed = place;
            }
        }

        return st.size();
    }
};