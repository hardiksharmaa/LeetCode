class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count[102];
        for(int num: nums){
            count[num]++;
        }

        int totalCount=0;
        for(int i: count){
            totalCount+= ((i)*(i-1))/2;
        }
        return totalCount;
    }
};