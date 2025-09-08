class Solution {
public:
    bool nonzero(int n){
        while(n>0){
            if(n%10==0) return false;
            n/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        int a=1;
        int b=n-1;
        while(!nonzero(a) || !nonzero(b)){
            a++;
            b--;
        }
        return {a,b};
    }
};