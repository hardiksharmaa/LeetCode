class Solution {
public:
    string encode(string s){
        unordered_map<char,int> mp;
        int code=0;
        string res="";
        for(char c: s){
            if(!mp.count(c)){
                mp[c]=code++;// 0->1->1
            }
            res+=to_string(mp[c])+"#";// 011
        }
        return res;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        string p=encode(pattern);// 011

        for(string w: words){
            if(encode(w)==p) ans.push_back(w);
        }
        return ans;
    }
};