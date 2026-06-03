class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n=landStartTime.size();
        int m=waterStartTime.size();

        int i=0;
        int j=0;
        int ans=INT_MAX;
        //land-water
        for(int i=0;i<n;i++){
            int landstop=landStartTime[i]+landDuration[i];
            for(int j=0;j<m;j++){
                int complete=max(landstop, waterStartTime[j])+waterDuration[j];
                ans=min(ans,complete);
            }
        }

        //water-land
        for(int j=0;j<m;j++){
            int waterstop=waterStartTime[j]+waterDuration[j];
            for(int i=0;i<n;i++){
                int complete=max(waterstop, landStartTime[i])+landDuration[i];
                ans=min(ans,complete);
            }
        }
        return ans;
    }
};