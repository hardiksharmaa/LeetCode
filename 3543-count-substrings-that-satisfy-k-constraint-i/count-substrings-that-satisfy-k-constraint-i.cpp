class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int count0=0;
        int count1=0;
        int i=0;
        int res=0;
        for(int j=0;j<s.length();j++){
            if(s[j]=='0') count0++;
            else count1++;

            while(count0>k && count1>k){
                if(s[i]=='0') count0--;
                else count1--;
                i++;
            }
            res+=(j-i+1);
        }
        return res;
    }
};