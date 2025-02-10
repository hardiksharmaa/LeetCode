class Solution {
public:
    typedef pair<int,int> P;
    vector<vector<int>> directions{{-1,0},{1,0},{0,-1},{0,1}};
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        queue<P> que;
        int freshcnt=0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){//rotten orange
                    que.push({i,j});
                }
                else if(grid[i][j]==1){//fresh orange
                    freshcnt++;
                }
            }
        }
        if(freshcnt==0) return 0;
        int minutes=0;
        while(!que.empty()){
            int N=que.size();
            while(N--){
                pair<int,int> curr=que.front();
                que.pop();
                int i=curr.first;
                int j=curr.second;
                for(vector<int> &dir: directions){
                    int i2=i+dir[0];
                    int j2=j+dir[1];
                    if(i2>=0 && i2<m && j2>=0 && j2<n && grid[i2][j2]==1){
                        grid[i2][j2]=2;
                        que.push({i2,j2});
                        freshcnt--;
                    }
                }
            }
            minutes++;
        }
        return freshcnt==0 ? (minutes-1) : -1;
    }
};