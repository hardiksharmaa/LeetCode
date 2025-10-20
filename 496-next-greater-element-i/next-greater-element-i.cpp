class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        stack<int> st;
        for(int x: nums2){
            while(!st.empty() && st.top()<x){
                mp[st.top()]=x;
                st.pop();
            }
            st.push(x);
        }//[4,2]
        while(!st.empty()){
            mp[st.top()]=-1;
            st.pop();
        }//[], {1:3, 3:4, 2:-1, 4:-1}
        vector<int> ans;
        for(int x: nums1){
            ans.push_back(mp[x]);
        }
        return ans;
    }
};