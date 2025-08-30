class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zerocnt=0;
        int start=0;
        int count=0;

        for(int end=0;end<nums.size();end++){
            if(nums[end]==0) zerocnt++;
            while(zerocnt>k){
                if(nums[start]==0) zerocnt--;
                start++;
            }
            count=max(count,end-start+1);
        }
        return count;
    }
};