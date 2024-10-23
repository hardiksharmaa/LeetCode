class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int currsum=0;
        int mini=INT_MAX;

        for(int j=0;j<nums.size();j++){
            currsum+=nums[j];

        while(currsum>=target){
            if(j-i+1<mini){
                mini=j-i+1;
            }
            currsum-=nums[i];
            i++;
        }
    }
        return mini!=INT_MAX ? mini : 0;
    }
};