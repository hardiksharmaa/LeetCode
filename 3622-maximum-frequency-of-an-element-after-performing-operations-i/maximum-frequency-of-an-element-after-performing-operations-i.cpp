class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        int maxi=*max_element(nums.begin(),nums.end())+k;
        vector<int> freq(maxi+1,0);

        for(int &x:nums){
            freq[x]++;
        }

        for(int i=1;i<=maxi;i++){
            freq[i]+=freq[i-1];
        }
        int ans=0;

        for(int i=0;i<=maxi;i++){
            if(freq[i]==0) continue;

            int l=max(0,i-k);
            int r=min(maxi,i+k);

            int totalcount=freq[r]-(l>0?freq[l-1]:0);
            int target=freq[i]-(i>0?freq[i-1]:0);
            int needed=totalcount-target;
            int maxpossible=target+min(numOperations,needed);
            ans=max(ans,maxpossible);
        }
        return ans;
    }
};