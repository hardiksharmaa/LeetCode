class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        long long sumodd=0;
        long long sumeven=0;
        long long i=1;//odd
        long long  j=2;//even
        while(n>0){
            sumodd+=i;
            sumeven+=j;
            i+=2;
            j+=2;
            n--;
        }
        return gcd(sumodd,sumeven);
    }
};