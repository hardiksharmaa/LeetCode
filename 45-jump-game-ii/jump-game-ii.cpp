class Solution {
public:
    int jump(vector<int>& nums) {
        int totalJumps=0;
        int dest=nums.size()-1;
        int coverage=0;
        int lastjumpinx=0;
        if(nums.size()==1) return 0;

        for(int i=0;i<nums.size();i++){
            coverage=max(coverage,i+nums[i]);
            if(i==lastjumpinx){
                lastjumpinx=coverage;
                totalJumps++;
            
            if(coverage>=dest){
                break;
            }
        }
        }
        return totalJumps;
    }
};