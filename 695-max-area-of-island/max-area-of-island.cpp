class Solution {
public:
    int maxarea,m,n,area;
    void DFS(vector<vector<int>>& grid,int i,int j){
        if(i>=m||i<0||j>=n||j<0||grid[i][j]!=1){
            return;
        }
        grid[i][j]=0;
        area++;
        DFS(grid,i+1,j);
        DFS(grid,i-1,j);
        DFS(grid,i,j+1);
        DFS(grid,i,j-1);

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
        maxarea=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    area=0;
                    DFS(grid,i,j);
                    maxarea=max(area,maxarea);
                }
            }
        }
        return maxarea;
    }
};