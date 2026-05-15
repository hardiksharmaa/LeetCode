class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=0;
        if(n==1){
            return nums[0];
        }
        
        while(low<=high){
            int mid=low+(high-low)/2;

            if((high-low)==1){
                if(nums[low]<nums[high]){
                    return nums[low];
                }
                else return nums[high];
            }
            else if(nums[mid]> nums[high]){
                low=mid;
            }
            else if(nums[mid]<nums[high]){
                high=mid;
            }

        }
        return ans;
    }
};