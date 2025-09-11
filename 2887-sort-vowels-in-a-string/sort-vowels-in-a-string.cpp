class Solution {
public:
    bool isVowel(char c){
        string vowels="aeiouAEIOU";
        return vowels.find(c)!=string::npos;
    }
    string sortVowels(string s) {
        vector<char>vowels;
        for(char c: s){
            if(isVowel(c)){
                vowels.push_back(c);
            }
        }
        sort(vowels.begin(),vowels.end());
        int ind=0;
        for(char &c: s){
            if(isVowel(c)){
                c=vowels[ind++];
            }
        }
        return s;
    }
};