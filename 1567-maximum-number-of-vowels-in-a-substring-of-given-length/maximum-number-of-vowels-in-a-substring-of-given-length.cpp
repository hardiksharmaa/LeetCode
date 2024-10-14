class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> st={'a','e','i','o','u'};
        int maxi=0;
        int vowels=0;
        int j=k-1;
        for(int i=0;i<k;i++){
            if(st.find(s[i])!=st.end()){
                vowels++;
            }
        }
        maxi=vowels;

        for(int i=k;i<s.length();i++){
            if(st.find(s[i-k])!=st.end()){
                vowels--;
            }
            if(st.find(s[i])!=st.end()){
                vowels++;
            }
            maxi=max(vowels,maxi);
        }
        return maxi;
    }
};