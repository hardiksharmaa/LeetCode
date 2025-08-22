class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0;
        int lastind=0;
        int cover=0;
        if(nums.size()<=1) return 0;
        for(int i=0;i<nums.size();i++){
            if(i>cover) return false;
            cover=max(cover,i+nums[i]);
            if(i==lastind){
                lastind=cover;
                jumps++;
            }
            if(lastind>=nums.size()-1) break;
        }
        return jumps;
    }
};