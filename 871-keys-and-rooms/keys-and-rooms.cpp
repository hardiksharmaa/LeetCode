class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> vis(n,false);
        queue<int> q;
        q.push(0);
        vis[0]=true;
        while(!q.empty()){
            int room=q.front();
            q.pop();
            for(int key: rooms[room]){
                if(!vis[key]){
                    q.push(key);
                    vis[key]=true;
                }
            }
        }
        for(int i=0;i<vis.size();i++){
            if(!vis[i]){
                return false;
                break;
            }
        }
        return true;
    }
};