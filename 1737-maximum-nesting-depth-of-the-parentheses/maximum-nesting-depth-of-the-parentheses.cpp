class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                count++;
                maxi=max(maxi,count);
            }
            else if(s[i]==')')count--;
        }
        return maxi;
    }
};