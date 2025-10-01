class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        long long maxi=numBottles;
        int curr=0;
        while(numBottles>=numExchange){
            int x=numBottles/numExchange;
            maxi+=x;
            curr=numBottles%numExchange;
            numBottles=curr+x;
        }
        return (int)maxi;
    }
};