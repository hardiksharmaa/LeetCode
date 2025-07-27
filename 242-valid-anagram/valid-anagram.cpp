class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        int vis[26]={0};

        for(int i=0;i<s.size();i++){
            vis[s[i]-'a']++;
            vis[t[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(vis[i]!=0){
                return false;
                break;
            }
        }
        return true;
    }
};