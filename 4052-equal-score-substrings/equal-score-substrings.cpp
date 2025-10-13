class Solution {
public:
    bool scoreBalance(string s) {
        vector<int> prefix(s.length());
        prefix[0]=s[0]-'a'+1;//1
        for(int i=1;i<s.length();i++){
            prefix[i]=prefix[i-1]+(s[i]-'a'+1);
        }
        int x=prefix[prefix.size()-1];//10
        if(x%2==0){//even
            int mid=x/2;//5
            if(find(prefix.begin(),prefix.end(),mid)!=prefix.end()){
                return true;
            }
            else return false;
        }
        return false;
    }
};