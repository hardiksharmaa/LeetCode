class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> vis(n,false);
        queue<int> que;
        que.push(0);
        vis[0]=true;
        while(!que.empty()){
            int room=que.front();
            que.pop();
            for(auto& key: rooms[room]){
                if(!vis[key]){
                    vis[key]=true;
                    que.push(key);
                }   
            }
        }
        for(int i=0;i<rooms.size();i++){
            if(!vis[i]) return false;
        }
        return true;
    }
};