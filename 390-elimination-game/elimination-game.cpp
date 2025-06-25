class Solution {
public:
    int solve(int left,int right,int diff,int ele,bool flag){
        if(ele==1) return left;
        
        if(flag){
            return solve(left + diff, right, diff * 2, ele / 2, false); 
        }
        else{
            int newLeft = (ele % 2 == 1) ? left + diff : left;
            return solve(newLeft, right - diff, diff * 2, ele / 2, true);
        }
    }
    int lastRemaining(int n) {
        return solve(1,n,1,n,true);//true for left to right
    }
};