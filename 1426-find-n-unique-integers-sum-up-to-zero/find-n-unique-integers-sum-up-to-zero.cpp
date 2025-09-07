class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        if(n%2==0){//even
            for(int i=-n/2;i<=n/2;i++){
                if(i==0) continue;
                ans.push_back(i); 
            }
        }
        else if(n%2!=0){//odd
            for(int i=-n/2;i<=n/2;i++){
                ans.push_back(i); 
            }
        }
        return ans;
    }
};