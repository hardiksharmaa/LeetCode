class Solution {
public:
    bool canEat(vector<int>& piles,int k,int h){
        long long totalhrs=0;
        for(int b: piles){
            totalhrs+=(b+k-1)/k;
            if(totalhrs>h) return false;
        }
        return totalhrs<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canEat(piles,mid,h)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};