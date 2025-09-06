class Solution {
public:
    bool canEat(vector<int>& piles,int k, int h){
        long long hrs=0;
        for(int x: piles){
            hrs+=ceil((double)x/k);
            if(hrs>h) return false;
        }
        return hrs<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=*max_element(piles.begin(),piles.end());
        int ans=right;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(canEat(piles,mid,h)){
                ans=mid;
                right=mid-1;
            }
            else left=mid+1;
        }
        return ans;
    }
};