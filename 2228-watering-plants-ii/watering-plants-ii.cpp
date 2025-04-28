class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int ra=0;
        int rb=0;
        int x=capacityA;
        int y=capacityB;
        int i=0;
        int j=plants.size()-1;
        while(i<j){
            if(x<plants[i]){
                ra++;
                x=capacityA;
            }
            x-=plants[i];
            i++;
            if(y<plants[j]){
                rb++;
                y=capacityB;
            }
            y-=plants[j];
            j--;            
        }
        if(i==j){
            if(x>=y){
                if(x<plants[i]) ra++;
            }
            else{
                if(y<plants[j]) rb++;
            }
        }
        return ra+rb;
    }
};