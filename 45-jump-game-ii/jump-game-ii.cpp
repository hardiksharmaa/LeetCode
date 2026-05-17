class Solution {
public:
    int jump(vector<int>& nums) {
        int covered=0;
        int currend=0;
        int n=nums.size();
        int steps=0;
        if(n==1){
            return 0;
        }
        for(int i=0;i<n-1;i++){
            if(covered>=i){
                covered=max(covered,i+nums[i]);
            }
            if(i==currend){
                steps++;
                currend=covered;
            }
        }
        return steps;
    }
};