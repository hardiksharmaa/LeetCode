class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        int start=1;
        int count=0;
        int x=1;
        while(n>0){
            sum+=start;
            start++;
            n--;
            count++;
            if(count%7==0){
                x++;
                start=x;
            }
        }
        return sum;
    }
};