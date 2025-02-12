class Solution {
public:
    void BFS(unordered_map<int,vector<int>>& adj,int u,vector<bool>& visited){
        queue<int> q;
        q.push(u);
        visited[u]=true;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            for(int & x: adj[temp]){
                if(!visited[x]){
                    q.push(x);
                    visited[x]=true;
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int m =isConnected.size();
        unordered_map<int,vector<int>> adj;
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                }
            }
        }
        vector<bool> visited(m,false);
        int count=0;
        for(int i=0;i<m;i++){
            if(!visited[i]){
                BFS(adj,i,visited);
                count++;
            }
        }
        return count;
    }
};