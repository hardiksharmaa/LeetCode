class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x: nums){
            mp[x]++;
        }
        int maxi=INT_MIN;
        int count=0;
        for(auto& [key,value]: mp){
            if(value>maxi){
                maxi=value;
                count=1;
            }
            else if(value==maxi){
                count++;
            }
        }
        return count*maxi;
    }
};