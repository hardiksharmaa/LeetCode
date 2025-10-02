class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int drunk=numBottles;//10
        int emptyB=numBottles;//10
        int fullB=0;//0
        while(fullB>=0){
                while(emptyB>=numExchange){
                    int x=emptyB-numExchange;//0
                    fullB++;//1
                    emptyB=x;//0
                    numExchange++;//6
                }
                if(emptyB<numExchange){
                    drunk+=fullB;//13
                    emptyB+=fullB;//1
                    fullB=0;//0
                }
                if(fullB==0 && emptyB<numExchange){
                    break;
                }
        }
        return drunk;
    }
};