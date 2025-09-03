class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
        for(int i=2;i<=n;i++){
            string curr="";
            int count=1;
            for(int j=1;j<=ans.size();j++){
                if(j<ans.size() && ans[j]==ans[j-1]) count++;
                else{
                    curr+=to_string(count)+ans[j-1];
                    count=1;
                }
            }
            ans=curr;
        }
        return ans;

    }
};