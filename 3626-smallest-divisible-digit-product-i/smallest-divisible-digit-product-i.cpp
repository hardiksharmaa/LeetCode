class Solution {
public:
    int func(int x){
        int pro=1;
        while(x>0){
            int last=x%10;
            pro*=last;
            x/=10;
        }
        return pro;        
    }
    int smallestNumber(int n, int t) {
        while(n){
            int p=func(n);
            if(p%t==0) return n;
            n++;
        }
        return 0;
    }
};