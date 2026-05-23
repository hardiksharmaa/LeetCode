class Solution {
public:
    bool check(vector<int>& nums) {
        int dip=0;
        for(int i=1;i<nums.size();i++){
            if(dip==1 && i==nums.size()-1){
                if(nums[i]>nums[0]) return false;
            } 
            if(nums[i]<nums[i-1]){
                dip++;
                if(dip>1) return false;
                if(dip==1 && i==nums.size()-1){
                if(nums[i]>nums[0]) return false;
            }
            }   
            else if(dip<=1 && nums[i]<nums[i-1]) return false;
        }
        return true;
    }
};