class Solution {
public:
int minimumjump(vector<int>&obstacles,int index,int lane,vector<vector<int>>&dp)
{
    if(index>=obstacles.size()-1)return 0;
    if(dp[index][lane-1]!=-1)
    return dp[index][lane-1];
    int ans=INT_MAX;
    if(obstacles[index+1]==lane)
    {
        if(lane!=1&&obstacles[index]!=1)
        ans=min(ans,1+minimumjump(obstacles,index+1,1,dp));
        if(lane!=2&&obstacles[index]!=2)
        ans=min(ans,1+minimumjump(obstacles,index+1,2,dp));
        if(lane!=3&&obstacles[index]!=3)
        ans=min(ans,1+minimumjump(obstacles,index+1,3,dp));
    }
    else
    ans=minimumjump(obstacles,index+1,lane,dp);
    dp[index][lane-1]=ans;
    return dp[index][lane-1];
}
int minimumtab(vector<int>&obstacles)
{
    vector<vector<int>>dp(obstacles.size(),vector<int>(3,0));
    for(int index=obstacles.size()-2;index>=0;index--)
    {
        for(int lane=0;lane<3;lane++)
        {
             int ans=INT_MAX;
         if(obstacles[index+1]==lane+1)
         {
          if(lane!=0&&obstacles[index]!=1)
           ans=1+dp[index+1][0];
           if(lane!=1&&obstacles[index]!=2)
           ans=min(ans,1+dp[index+1][1]);
           if(lane!=2&&obstacles[index]!=3)
           ans=min(ans,1+dp[index+1][2]);
        }
        else
        ans=dp[index+1][lane];
        dp[index][lane]=ans;
        }
    }
    return dp[0][1];
}
int minispaceoptimistation(vector<int>&obstacles)
{
    vector<int>dp(3,0);
    for(int index=obstacles.size()-2;index>=0;index--)
    {
        for(int lane=0;lane<3;lane++)
        {
             int ans=INT_MAX;
         if(obstacles[index+1]==lane+1)
         {
          if(lane!=0&&obstacles[index]!=1)
           ans=1+dp[0];
           if(lane!=1&&obstacles[index]!=2)
           ans=min(ans,1+dp[1]);
           if(lane!=2&&obstacles[index]!=3)
           ans=min(ans,1+dp[2]);
        }
        else
        ans=dp[lane];
        dp[lane]=ans;
        }
    }
    return dp[1];
}
    int minSideJumps(vector<int>& obstacles) {
        // vector<vector<int>>dp(obstacles.size(),vector<int>(3,-1));
        // return minimumjump(obstacles,0,2,dp);
        // return minimumtab(obstacles);
        return minispaceoptimistation(obstacles);
    }
};