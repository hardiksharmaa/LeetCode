class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first=LONG_MIN;
        long second=LONG_MIN;
        long third=LONG_MIN;

        for(int x: nums){
            if(x==first||x==second||x==third) continue; //duplicate

            if(x>first){
                third=second;
                second=first;
                first=x;
            }
            else if(x>second){
                third=second;
                second=x;
            }
            else if(x>third){
                third=x;
            }
        }
        return (third==LONG_MIN)?first:third;
    }
};