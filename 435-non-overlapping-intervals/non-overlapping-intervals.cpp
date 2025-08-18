class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.empty()) return 0;
        int count=0;
        sort(intervals.begin(),intervals.end(),[](vector<int>&a, vector<int>& b){
            return a[0]<b[0];
        });
        vector<int> curr=intervals[0];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<curr[1]){
                //overlap  
                count++;
                if(intervals[i][1]<curr[1]) curr=intervals[i];//smaller end
            }
            else curr=intervals[i];

        }
        return count;
    }
};