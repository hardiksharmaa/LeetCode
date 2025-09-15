class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count=0;
        stringstream ss(text);
        string word="";
        while(ss>>word){
            bool cantype=true;
            for(char c: brokenLetters){
                if(word.find(c)!=string::npos){
                    cantype=false;
                    break;
                }
            }
            if(cantype) count++;
        }
        return count;
    }
};