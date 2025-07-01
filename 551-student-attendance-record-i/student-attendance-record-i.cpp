class Solution {
public:
    bool checkRecord(string s) {
        int count=0;
        int lcount=0;
        int acount=0;
        for(int i=0;i<s.length();i++){
            if(acount>=2){
                return false;
                break;
            }
            if(lcount>=2){
                return false;
                break;
            }
            if(s[i]=='A') acount++;
            else if(s[i]=='L' && s[i+1]=='L'){
                count++;
                lcount=max(lcount,count);
            } 
            else if(s[i]=='L' && s[i+1]!='L' && count<2){
                lcount=max(lcount,count);
                count=0;
            }
        }
        if(acount<2 && lcount<2) return true;
        else return false;
    }
};