class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(string x: operations){
            if(x[0]=='+' || x[x.length()-1]=='+'){
                ans++;
            }
            if(x[0]=='-' || x[x.length()-1]=='-'){
                ans--;
            }
        }
        return ans;
    }
};