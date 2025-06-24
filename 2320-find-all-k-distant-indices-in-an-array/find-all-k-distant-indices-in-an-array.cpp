class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n=nums.size();
        vector<int> ans;
        vector<bool> flag(n,false);
        for(int i=0;i<n;i++){
            if(nums[i]==key){
                int left=max(0,i-k);
                int right=min(n-1,i+k);
                for(int j=left;j<=right;j++){
                    flag[j]=true;
                }
            }
        }

        for(int i=0;i<flag.size();i++){
            if(flag[i]) ans.push_back(i);
        }
        return ans;
    }
};