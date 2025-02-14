class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int jumps=0;
        int lastjumpind=0;
        int coverage=0;
        if(n<=1) return 0;
        for(int i=0;i<n;i++){
            coverage=max(coverage,i+nums[i]);
            if(i==lastjumpind){
                lastjumpind=coverage;
                jumps++;
            }
            if(lastjumpind>=n-1) break;
        }
        return jumps;
    }
};