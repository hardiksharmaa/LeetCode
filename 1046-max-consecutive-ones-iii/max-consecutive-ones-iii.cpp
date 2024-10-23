class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zerocnt=0;
        int max_ones=0;
        int start=0;
        for(int end=0;end<nums.size();end++){
            if(nums[end]==0){
                zerocnt++;
            }
            while(zerocnt>k){
                if(nums[start]==0){
                    zerocnt--;
                }
                start++;
            }
            max_ones=max(max_ones,end-start+1);
        }
        return max_ones;
    }
};