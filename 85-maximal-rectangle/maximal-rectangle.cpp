class Solution {
    vector<int>nextsmaller(vector<int>arr){
        stack<int>s,k;
        s.push(-1);
        k.push(-1);
        vector<int>ans(arr.size());
        for (int i=arr.size()-1;i>=0;i--){
            while (s.top()>=arr[i]){s.pop();k.pop();}
            ans[i]=k.top();
            s.push(arr[i]);
            k.push(i);
        }
        return ans;
    }
    vector<int>prevsmaller(vector<int>arr){
        stack<int>s,k;
        s.push(-1);
        k.push(-1);
        vector<int>ans(arr.size());
        for (int i=0;i<ans.size();i++){
            while (s.top()>=arr[i]){s.pop();k.pop();}
            ans[i]=k.top();
            s.push(arr[i]);
            k.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        int ans=0;
        vector<int>left=prevsmaller(heights);
        vector<int>righ=nextsmaller(heights);
        for (int i=0;i<heights.size();i++){
            if (righ[i]==-1){righ[i]=heights.size();}
            ans=max(ans,(righ[i]-left[i]-1)*heights[i]);
        }
        return ans;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<vector<int>>v;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0;i<n;i++){
            vector<int>t;
            for(int j =0;j<m;j++){
                t.push_back(matrix[i][j]-'0');
            }
            v.push_back(t);
        }
        int area = largestRectangleArea(v[0]);
        for(int i = 1;i<n;i++){
            for(int j =0;j<m;j++){
                if(v[i][j]){
                    v[i][j]+=v[i-1][j];
                }
                else{
                    v[i][j]=0;
                }
            }
           area=max(area,largestRectangleArea(v[i]));
        }
        return area;
    }
};