class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int low=-1;
        int high=1e9+7;
        while(low<high-1){
            int mid=low+(high-low)/2;
            int a=0;
            for(int i=1;i<nums.size();i++){
                if(nums[i]-nums[i-1]<=mid){
                    a++;
                    i++;
                }
            }
            if(a>=p) high=mid;
            else low=mid;
        }
        return high;
    }
};