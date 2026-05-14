class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();

        if(n==1){
            return false;
        }
        else{
            if(nums[0]!=1){
                return false;
            }
        }
        for(int i=1;i<n;i++){
            if(i==n-1 && (nums[i]-nums[i-1]!=0)){
                return false;
            }
            else if(i!=n-1 && (nums[i]-nums[i-1])!=1){
                return false;
            }
        }
        return true;
    }
};