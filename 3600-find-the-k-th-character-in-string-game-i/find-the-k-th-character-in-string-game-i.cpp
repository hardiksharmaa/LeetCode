class Solution {
public:
    char next(char c){
        return c=='z'? 'a' : c+1;
    }
    char kthCharacter(int k) {
        string word="a";
        while(word.length()<k){
            string x;
            for(char c: word){
                x+=next(c);
            }
            word+=x;
        }
        return word[k-1];
    }
};