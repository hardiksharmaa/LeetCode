class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x: nums){
            mp[x]++;
        }
        vector<int> res(2);
        int count=0;
        for(auto& [key,value]: mp){
            if(value==2){
                res[count]=key;
                count++;
            }
            if(count==2) break;
        }
        return res;
    }
};