class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long zero=0;
        long long  ans=0;
        for(int x: nums){
            if(x==0){
                zero++;
                ans+=zero;
            }
            else zero=0;
        }
        return ans;
    }
};