class Solution {
public:
    int maxDifference(string s) {
        unordered_map<int,int> mp;
        for(auto& a: s){
            mp[a]++;
        }
        int maxodd=INT_MIN;
        int mineven=INT_MAX;
        for(auto [key, value]: mp ){
            if(value%2==0){
                mineven=min(mineven,value);
            }
            else{
                maxodd=max(maxodd,value);
            }
        }
        return maxodd-mineven;
    }
};