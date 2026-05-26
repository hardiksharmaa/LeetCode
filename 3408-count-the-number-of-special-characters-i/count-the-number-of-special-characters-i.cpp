class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.length();
        unordered_map<int,int> mp;
        unordered_set<char> st;
        int count=0;

        for(int i=0;i<n;i++){
            mp[word[i]]++;
        }

        for(int i=0;i<n;i++){
            char ch=word[i];
            if(ch>=97 && ch<=122){
                if(st.contains(ch)){
                    continue;
                }
                char opposite= ch-'a'+'A';
                if(mp.find(opposite)!=mp.end()){
                    count++;
                    st.insert(ch);
                    st.insert(opposite);
                }
            }
            else{
                if(st.contains(ch)){
                    continue;
                }
                char opposite= ch-'A'+'a';
                if(mp.find(opposite)!=mp.end()){
                    count++;
                    st.insert(ch);
                    st.insert(opposite);
                }
            }
        }
        return count;
    }
};