class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        if(nums.size()==0) return 0;
        int maxi=0;
        for(int num: st){
            if(!st.count(num-1)){
                int currnum=num;
                int streak=1;

                while(st.count(currnum+1)){
                    currnum++;
                    streak++;
                }
                maxi=max(maxi,streak);
            } 
        }
        return maxi;
    }
};