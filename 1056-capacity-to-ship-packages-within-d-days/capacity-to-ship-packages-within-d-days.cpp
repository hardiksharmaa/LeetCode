class Solution {
public:
    bool canShip(vector<int>& weights,int capacity,int d){
        int days=1, curr=0;
        for(int weight: weights){
            if(curr+weight>capacity){
               days++;
               curr=0; 
            }
            curr+=weight;
        }
        return days<=d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low= *max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(), weights.end(), 0);
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canShip(weights,mid,days)){
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};