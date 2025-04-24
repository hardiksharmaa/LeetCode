class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> temp(nums.size(),-1);
        int even=0;
        int odd=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                temp[even]=nums[i];
                even+=2;
            }
            else{
                temp[odd]=nums[i];
                odd+=2;
            }
        }
        return temp;
    }
};