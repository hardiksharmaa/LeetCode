class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());//2,2,5,6,7,9

        int ans=0;
        int count=2;
        int i=cost.size()-1;

        while(i>=0){
            if(count==0){
                count=2;
            }
            else if(count>0){
                ans+=cost[i];
                count--;
            }
            i--;
        }
        return ans;
    }
};