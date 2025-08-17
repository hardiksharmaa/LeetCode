class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        if(words.size()!=pattern.length()) return false;

        unordered_map<char,string> ch;
        unordered_map<string,char> wo;

        for(int i=0;i<pattern.length();i++){
            char c=pattern[i];
            string w=words[i];

            if(ch.count(c)){
                if(ch[c]!=w) return false;
            }
            else ch[c]=w;

            if(wo.count(w)){
                if(wo[w]!=c) return false;
            }
            else wo[w]=c;
        }
        return true;
    }
};