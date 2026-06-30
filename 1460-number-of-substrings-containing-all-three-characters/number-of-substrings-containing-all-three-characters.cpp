class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0;
        int ans=0;
        int vec[3]={0};
        int n=s.length();

        for(int r=0;r<n;r++){
            vec[s[r]-'a']++;//0->1, 1->2, 2->3
            //once we get valid substring then all right values can be included 
            while(vec[0]>0 && vec[1]>0 && vec[2]>0){
                ans+=(n-r);
                vec[s[l]-'a']--;
                l++;
            }
        }
        return ans;
    }
};