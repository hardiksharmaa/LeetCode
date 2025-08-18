class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> start;
        vector<int> right;
        for(auto &x: intervals){
            start.push_back(x[0]);
            right.push_back(x[1]);
        }
        sort(start.begin(),start.end());
        sort(right.begin(),right.end());
        int i=0,j=0,curr=0,ans=0;
        int n=intervals.size();
        while(i<n && j<n){
            if(start[i]<=right[j]){
                curr++;
                ans=max(curr,ans);
                i++;
            }
            else{
                curr--;
                j++;
            }
        }
        return ans;
    }
};