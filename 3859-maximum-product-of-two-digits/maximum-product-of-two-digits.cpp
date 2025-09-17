class Solution {
public:
    int maxProduct(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        int ans=0;
        int last=s[s.length()-1]-'0';
        int slast=s[s.length()-2]-'0';
        return ans=last*slast;
    }
};