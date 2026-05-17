class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int covered=0;
        if(n==1){
            return true;
        }
        else{
            if(nums[0]==0){
                return false;
            }
        }
        for(int i=0;i<n-1;i++){
            if(covered>=i){
                covered=max(covered, i+nums[i]);
            }
            if(covered>=n-1){
                return true;
            }
        }
        return false;
    }
};