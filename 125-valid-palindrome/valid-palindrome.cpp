class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char c: s){
            if(isalnum(c) && c!=' ') str+=tolower(c);
        }
        int i=0;
        int j=str.size()-1;
        while(i<=j){
            if(str[i]!=str[j]){
                return false;
                break;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};