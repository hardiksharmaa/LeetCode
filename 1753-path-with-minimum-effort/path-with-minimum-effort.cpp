class Solution {
public:
    vector<vector<int>> directions={{-1,0},{1,0},{0,-1},{0,1}};
    typedef pair<int,pair<int,int>> P;
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m=heights.size();
        int n=heights[0].size();
        auto isSafe=[&](int x,int y){
            return x>=0 && x<m && y>=0 && y<n;
        };
        vector<vector<int>> result(m,vector<int>(n,INT_MAX));
        priority_queue<P,vector<P>,greater<P>> pq;
        result[0][0]=0;
        pq.push({0,{0,0}});
        while(!pq.empty()){
            int diff=pq.top().first;
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            pq.pop();
            if (x == m - 1 && y == n - 1) return diff;
            for(auto dir: directions){
                int x1=x+dir[0];
                int y1=y+dir[1];
                if(isSafe(x1,y1)){
                    int abdiff=abs(heights[x][y]-heights[x1][y1]);
                    int maxdiff=max(diff,abdiff);
                    if(result[x1][y1]>maxdiff){
                        result[x1][y1]=maxdiff;
                        pq.push({maxdiff,{x1,y1}});
                    }
                }
            }
        }
        return -1;
    }
};