class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        int reqcnt=t.length();
        if(t.length()>n){
            return "";
        }
        unordered_map<char,int> mp;

        for(char &ch: t){
            mp[ch]++;
        }

        int i=0,j=0;
        int minwindow=INT_MAX;
        int start_i=0;

        while(j<n){
            char ch=s[j];
            if(mp[ch]>0) reqcnt--;

            mp[ch]--;

            while(reqcnt==0){
                int currwindow=j-i+1;
                if(currwindow<minwindow){
                    minwindow=currwindow;
                    start_i=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    reqcnt++;
                }
                i++;
            }
            j++;
        }
        return minwindow==INT_MAX ? "" : s.substr(start_i,minwindow);
    }
};