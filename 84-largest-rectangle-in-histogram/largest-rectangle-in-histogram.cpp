class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        st.push(-1);
        int max_area=INT_MIN;
        for(int i=0;i<heights.size();i++){
            while(st.top()!=-1 && heights[i]<=heights[st.top()]){
                int height=heights[st.top()];
                st.pop();
                int width=i-st.top()-1;
                max_area=max(max_area,height*width);
            }
            st.push(i);
        }

        while(st.top()!=-1){
            int height=heights[st.top()];
            st.pop();
            int width=heights.size()-st.top()-1;
            max_area=max(max_area,height*width);
        }
        return max_area;
    }
};