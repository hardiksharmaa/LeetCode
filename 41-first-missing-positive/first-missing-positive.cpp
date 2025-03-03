class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // tc(O(n)), sc(O(1))
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<=0 || nums[i]>n){
                nums[i]=n+1;
            }
        }
        for(auto x: nums){
            int y=abs(x);
            if(y>=1 && y<=n){
                int ind=y-1;
                if(nums[ind]>0) nums[ind]=-nums[ind];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0) return i+1;
        }
        return n+1;
    }
};