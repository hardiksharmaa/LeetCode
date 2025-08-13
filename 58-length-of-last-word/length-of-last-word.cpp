class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int count=0;
        int j=n-1;
        while(s[j]==' '){
            j--;
        }
        for(int i=j;i>=0;i--){
            if(s[i]==' '){
                break;
            }
            count++;
        }
        return count;
    }
};