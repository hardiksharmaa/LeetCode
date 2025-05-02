class Solution {
public:
    int maximum69Number (int num) {
        vector<int> nums;
        while(num){
            int x=num%10;
            nums.push_back(x);
            num/=10;
        }
        reverse(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==6 && count==0){
                nums[i]=9;
                count++;
            }
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans*10 + nums[i];
        }
        return ans;
    }
};