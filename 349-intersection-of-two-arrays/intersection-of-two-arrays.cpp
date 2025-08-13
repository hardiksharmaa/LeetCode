class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> st;
        for(int x:nums1){
            st.insert(x);
        }

        for(int i=0;i<nums2.size();i++){
            if(st.count(nums2[i])){
                 ans.push_back(nums2[i]);
                 st.erase(nums2[i]);
            }
        }
        return ans;
    }
};