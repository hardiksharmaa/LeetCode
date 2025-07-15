class Solution {
public:
    bool containsSpecialCharacters(const string& str) {
    for (char c : str) {
        if (!isalnum(c)) return true;
    }
    return false;
}
    bool isValid(string word) {
        if(word.length()<3) return false;
        int vowel=0;
        int cons=0;
        if(containsSpecialCharacters(word)) return false;
        for(int i=0;i<word.length();i++){
            if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'|| word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U' ){
                vowel++;
            }
            else if(!isdigit(word[i])) cons++;
        }
        if(vowel<1 || cons <1) return false;
        return true;

    }
};