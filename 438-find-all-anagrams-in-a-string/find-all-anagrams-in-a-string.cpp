class Solution {
public:
    bool func(vector<int> &counter){
            for(int &i:counter){
                if(i!=0){
                    return false;
                }
            }
            return true;
        }
    vector<int> findAnagrams(string s, string p) {
        vector<int> counter(26,0);
        int n=s.length();
        int k=p.length();
        for(int i=0;i<k;i++){
            char ch=p[i];
            counter[ch-'a']++;
        }

        int i=0;
        int j=0;
        vector<int> ans;
        while(j<n){
            counter[s[j]-'a']--;
            while(j-i+1==k){
                if(func(counter)){
                    ans.push_back(i);
                }
                counter[s[i]-'a']++;
                i++;
            }
            j++;
        }
        return ans;
    }
};