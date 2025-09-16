class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<char,int> mp;
        string str=to_string(n);
        for(char c: str){
            mp[c]++;
        }
        int minival=INT_MAX;
        int  minidigi;
        for(auto& [key,value]: mp){
            if(value<minival){
                minival=value;
                minidigi=key-'0';
            }
            else if(value==minival){
                minidigi =min(minidigi,key-'0');
            }
        }
        return minidigi;
    }
};