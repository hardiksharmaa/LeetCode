class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int x: nums){
            mp[x]++;
        }
        int sum=0;
        for(auto& [key,value]: mp){
            if(value>=k && value%k==0){
                sum+=(value*key);
            }
        }
        return sum;
    }
};