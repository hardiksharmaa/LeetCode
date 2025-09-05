class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftsum=0;
        for(int i=0;i<k;i++){
            leftsum+=cardPoints[i];
        }
        int ans=leftsum;
        int rightsum=0;
        for(int i=0;i<k;i++){
            rightsum+=cardPoints[cardPoints.size()-1-i];
            leftsum-=cardPoints[k-1-i];
            ans=max(ans,leftsum+rightsum);
        }
        return ans;
    }
};