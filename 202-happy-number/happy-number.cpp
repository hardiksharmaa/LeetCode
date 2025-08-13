class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while(n!=1 && !st.count(n)){
            st.insert(n);
            int sum=0;
            while(n>0){
                int num=n%10;
                sum+=num*num;
                n/=10;
            }
            n=sum;
        }
        return n==1;
    }
};