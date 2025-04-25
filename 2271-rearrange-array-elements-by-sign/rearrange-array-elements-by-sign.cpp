class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> posi, negi, ans(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]>0) posi.push_back(nums[i]);
            else negi.push_back(nums[i]);
        }
        int i=0,j=1,x=0,y=0;
        while(i<n && j<n){
            ans[i]=posi[x];
            ans[j]=negi[y];
            i+=2;
            j+=2;
            x++;
            y++;
        }
        return ans;
    }
};