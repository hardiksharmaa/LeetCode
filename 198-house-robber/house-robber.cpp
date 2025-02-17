class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()<2){
            return nums[0];
        }

        
        int prevprev=0;
        int prev=nums[0];

        for(int i=2;i<=nums.size();i++){
            int skip=prev;
            int steal=nums[i-1]+prevprev;
            int temp=max(skip,steal);
            prevprev=prev;
            prev=temp;
        }
        return prev;
    }
};