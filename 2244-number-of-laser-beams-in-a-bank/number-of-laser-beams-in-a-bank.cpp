class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sum=0;
        int x=1;
        int count=0;
        for(auto& i: bank){
            int curr=0;
            for(char c: i){
                if(c=='1'){
                    curr++;
                }
            }
            if(curr==0) continue;
            else{
                count++;
                x=x*curr;
                if(count==2){
                    sum+=x;
                    x=curr;
                    count=1;
                }
            }
        }
        return sum;
    }
};