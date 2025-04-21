class Solution {
public:
    int n,m;
    void DFS(vector<vector<char>>& grid,int i,int j){
        if(i<0||i>=n||j<0||j>=m || grid[i][j]=='0') return;
        grid[i][j]='0';
        DFS(grid,i+1,j);
        DFS(grid,i-1,j);
        DFS(grid,i,j+1);
        DFS(grid,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        n=grid.size();
        m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    DFS(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};