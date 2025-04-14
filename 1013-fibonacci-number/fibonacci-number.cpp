class Solution {
public:
    vector<int> dp;
    int func(int n){
        if(n==1||n==0) return n;
        if(dp[n]!=-1) return dp[n];
        dp[n]=fib(n-1)+fib(n-2);
        return dp[n];
    }
    int fib(int n) {
        dp.resize(n+1,-1);
        return func(n);
        }
};