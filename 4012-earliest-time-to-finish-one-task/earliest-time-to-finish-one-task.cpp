class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int sum=0;
        int ans=INT_MAX;
        for(int i=0;i<tasks.size();i++){
            sum=tasks[i][0]+tasks[i][1];
            ans=min(ans,sum);
        }
        return ans;
    }
};