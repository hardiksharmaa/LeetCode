class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return false;
        stack<int> st;
        int middle=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(nums[i]<middle){
                return true;
            }
            while(!st.empty() && st.top()<nums[i]){
                middle=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};