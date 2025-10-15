class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        // int n=nums.size();
        // vector<int> end(n,1),start(n,1);
        // for(int i=1;i<n;i++){
        //     if(nums[i]>nums[i-1]){
        //         end[i]=end[i-1]+1;
        //     }
        // }
        // for(int i=n-2;i>=0;i--){
        //     if(nums[i]<nums[i+1]){
        //         start[i]=start[i+1]+1;
        //     }
        // }
        // int ans=1;
        // for(int k=0;k+1<n;k++){
        //     ans=max(ans,min(end[k],start[k+1]));
        // }
        // return ans;//O(n)


        int n=nums.size();
        if(n<2) return 0;
        vector<int> inc(n,1);
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                inc[i]=inc[i+1]+1;
            }
        }
        auto func=[&](int k){
            if(k==0) return true;
            for(int i=0;i+2*k<=n;i++){
                if(inc[i]>=k && inc[i+k]>=k){
                    return true;
                }
            }
            return false;
        };
        int low=0,high=n/2,ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(func(mid)) ans=mid,low=mid+1;
            else high=mid-1;
        }
        return ans;//O(nlogn)
    }
};