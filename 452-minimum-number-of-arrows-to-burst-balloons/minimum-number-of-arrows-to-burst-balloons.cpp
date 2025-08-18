class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int count=0;
        sort(points.begin(),points.end(),[](vector<int>& a, vector<int>& b){
            return a[0]<b[0];
        });

        vector<int> curr=points[0];

        for(int i=1;i<points.size();i++){
            if(points[i][0]<=curr[1]){
                //overlaps
                curr[0] = max(curr[0], points[i][0]);
                curr[1] = min(curr[1], points[i][1]);
            }
            else{
                count++;
                curr=points[i];
            }
        }
        count++;
        return count;
    }
};