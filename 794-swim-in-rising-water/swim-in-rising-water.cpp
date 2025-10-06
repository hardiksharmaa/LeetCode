class Solution {
public:
    int n;
    vector<vector<int>> dir={{1,0},{-1,0},{0,1},{0,-1}};
    bool isvalid(int x,int y){
        return x>=0 && x<n && y>=0 && y<n;
    }
    int func(vector<vector<int>>& grid){
        priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
        vector<vector<int>> vis(n,vector<int> (n,0));
        pq.push({grid[0][0],0,0});
        vis[0][0]=1;

        while(!pq.empty()){
            auto curr=pq.top();
            pq.pop();

            int t=curr[0];
            int x=curr[1];
            int y=curr[2];
            if(x==n-1 && y==n-1){
                return t;
            }

            for(auto& d: dir){
                int nr=x+d[0];
                int nc=y+d[1];
                if(isvalid(nr,nc) && !vis[nr][nc]){
                    vis[nr][nc]=1;
                    pq.push({max(t,grid[nr][nc]),nr,nc});
                }
            }    
        }
        return -1;
    }
    int swimInWater(vector<vector<int>>& grid) {
        n=grid.size();
        return func(grid);
    }
};