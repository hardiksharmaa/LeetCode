class Solution {
public:
    string solve(const string& s){
        string newstr;
        for(char c:s){
            if(isalnum(c)){
                newstr+=tolower(c);
            }
        }
        return newstr;
    }
    bool isPalindrome(string s) {
        string ans=solve(s);
        int i=0;
        int j=ans.length()-1;
        while(i<j){
            if(ans[i]!=ans[j]) return false;
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};