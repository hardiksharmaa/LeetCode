class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long sum=0;
        if(n<k && m<k) return 0;
        if(n>k){
            sum+=1LL*(n-k)*k;
        }
        if(m>k){
            sum+=1LL*(m-k)*k;
        }
        return sum;
    }
};