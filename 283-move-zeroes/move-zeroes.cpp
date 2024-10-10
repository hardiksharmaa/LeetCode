class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                int a=nums[temp];
                nums[temp]=nums[i];
                nums[i]=a;
                temp++;
            }
        }
    }
};