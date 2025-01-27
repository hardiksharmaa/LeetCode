class Solution {
public:
    void dfs(vector<bool>& visited,int u, unordered_map<int, vector<int>>& adj){
        visited[u]=true;
        for(int& v: adj[u]){
            if(!visited[v]){
                dfs(visited,v,adj);
            }
        } 

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        unordered_map<int, vector<int>> adj;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<bool> visited(n,false);
        int count=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(visited,i,adj);
                count++;
            }
        }
        return count;
    }
};