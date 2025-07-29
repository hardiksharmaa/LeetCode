class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26,0);
        vector<int> curr(26,0);

        int n1=s1.size();
        int n2=s2.size();

        if(n1>n2) return false;

        for(int i=0;i<n1;i++){
            freq[s1[i]-'a']++;
            curr[s2[i]-'a']++;
        }
        if(freq==curr) return true;

        for(int i=n1;i<n2;i++){
            curr[s2[i]-'a']++;
            curr[s2[i-n1]-'a']--;

            if(curr==freq) return true;
        }
        return false;
    }
};