class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int maxsum=sum;

        int start=0;
        int last=k;
        while(last<nums.size()){
            sum-=nums[start];
            start++;

            sum+=nums[last];
            last++;
            maxsum=max(maxsum,sum);
        }
        return (double) maxsum/k;
    }
};