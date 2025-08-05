class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        vector<int> used(n);
        int count=0;
        for(int x: fruits){
            bool placed=false;
            for(int i=0;i<n;i++){
                if(!used[i] && baskets[i]>=x){
                    used[i]=true;
                    placed=true;
                    break;
                }
            }
            if(!placed) count++;
        }
        return count;
    }
};