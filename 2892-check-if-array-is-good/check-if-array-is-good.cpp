class Solution {
public:
    bool isGood(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int n=nums.size();

        // if(n==1){
        //     return false;
        // }
        // else{
        //     if(nums[0]!=1){
        //         return false;
        //     }
        // }
        // for(int i=1;i<n;i++){
        //     if(i==n-1 && (nums[i]-nums[i-1]!=0)){
        //         return false;
        //     }
        //     else if(i!=n-1 && (nums[i]-nums[i-1])!=1){
        //         return false;
        //     }
        // }
        // return true;


        int n=nums.size();
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            sum+=nums[i];
        }
        // sum should be == [n(n+1)/2]-1

        if(sum!= ((n*(n+1))/2)-1){
            return false;
        } // this gives us assurance that one ele is getting repeated

        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto [key,value]: mp){
            if(key!=maxi && value >1){
                return false;
            }
            else if(key==maxi && value!=2){// only maxi should be repeating
                return false;
            }
        }

        return true;
        
    }
};