class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> mp1;//v
        unordered_map<char,int> mp2;//c

        for(char c: s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                mp1[c]++;
            }
            else mp2[c]++;
        }
        int max1=0;//v
        int max2=0;//c

        for(auto& p: mp1){
            if(p.second>max1) max1=p.second;
        }
        for(auto& p: mp2){
            if(p.second>max2) max2=p.second;
        }
        return max1+max2;
    }
};