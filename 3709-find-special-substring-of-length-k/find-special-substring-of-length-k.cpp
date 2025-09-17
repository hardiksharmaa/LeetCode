class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int count=0;
        char temp=s[0];
        if(s.length()==1 && k==1) return true;
        for(int i=0;i<s.length();i++){
            if(s[i]==temp){
                count++;
            }
            else if(s[i]!=temp){
                temp=s[i];
                count=1;
            }
            if(count==k){
                if(s[i]!=s[i+1] && i<s.length()){
                    return true;
                }
            }
        }
        return false;
    }
};