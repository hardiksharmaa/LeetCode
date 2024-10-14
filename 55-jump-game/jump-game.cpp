class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int j=nums.size()-2;
        int dest=nums.size()-1;
        int i=nums.size()-1;

        while(j>=0){
            if(nums[j]>=(i-j)){
                dest=j;
                i=dest;
                j--;
            }
            else{
                j--;
            }
        }
        if(dest==0) return true;
        else return false;
        
    }
};