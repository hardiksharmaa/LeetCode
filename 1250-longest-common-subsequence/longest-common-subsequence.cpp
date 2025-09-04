class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<int> dp(text1.length(),0);
        int maxi=0;

        for(char c: text2){
            int curr=0;
            for(int i=0;i<dp.size();i++){
                if(curr<dp[i]){
                    curr=dp[i];
                }
                else if(c==text1[i]){
                    dp[i]=curr+1;
                    maxi=max(maxi,curr+1);
                }
            }
        }
        return maxi;
    }
};