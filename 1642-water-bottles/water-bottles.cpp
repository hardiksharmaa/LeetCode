class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        long long maxi=numBottles;
        int curr=0;
        while(numBottles>=numExchange){
            int x=numBottles/numExchange;//3 exchange krdi
            maxi+=x;//15+3==18
            curr=numBottles%numExchange;//3 left
            numBottles=curr+x;// 3 peeli + 3 jo bchi thi
        }
        return (int)maxi;
    }
};