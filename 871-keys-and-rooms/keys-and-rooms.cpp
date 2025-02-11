class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> visited(n,false);
        queue<int> que;
        que.push(0);
        visited[0]=true;
        while(!que.empty()){
            int room=que.front(); 
            que.pop();
            for(int& key: rooms[room]){
                if(!visited[key]){
                    visited[key]=true;
                    que.push(key);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(!visited[i]) return false;
        }
        return true;
    }
};