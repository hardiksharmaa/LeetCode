class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left=1;
        int right=*max_element(nums.begin(),nums.end());
        int result=right;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(isValid(nums,mid,threshold)){
                result=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return result;
    }
    private:
        bool isValid(vector<int>& nums,int divisor,int threshold){
            int sum=0;
            for(int num: nums){
                sum+=ceil((double)num/divisor);
            }
            return sum<=threshold;
        }
};