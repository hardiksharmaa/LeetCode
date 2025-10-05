class Solution {
public:
    vector<pair<int, int>> dir={{1,0},{-1,0},{0,1},{0,-1}};
    int m;
    int n;
    void dfs(vector<vector<int>>& heights, int r, int c, vector<vector<int>>& visited){
        visited[r][c]=1;
        for(auto& [a,b]: dir){
            int nextr=r+a;
            int nextc=c+b;
            if(nextr>=0 && nextr<m && nextc>=0 && nextc<n && heights[nextr][nextc]>=heights[r][c] && !visited[nextr][nextc]){
                dfs(heights,nextr,nextc,visited);
            }
        }
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m=heights.size();
        n=heights[0].size();
        vector<vector<int>> res;
        vector<vector<int>> pacific(m, vector<int>(n, 0));
        vector<vector<int>> atlantic(m, vector<int>(n, 0));
        for(int i=0;i<m;i++){
            dfs(heights,i,0,pacific);
        }//left edge mai jayenge 
        for(int j=0;j<n;j++){
            dfs(heights,0,j,pacific);
        }//top edge mai chalo
        
        for(int i=0;i<m;i++){
            dfs(heights,i,n-1,atlantic);
        }//right edge mai jayenge 
        for(int j=0;j<n;j++){
            dfs(heights,m-1,j,atlantic);
        }//bottom edge mai chalo


        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(pacific[i][j] && atlantic[i][j]){
                    res.push_back({i,j});
                }
            }
        }
        return res;
    }
};