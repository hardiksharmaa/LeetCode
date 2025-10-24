class Solution {
public:

    int nextBeautifulNumber(int n) {
        unordered_map<char,int> mp;
        n+=1;
        int ans;
        while(n){
            bool flag=true;
            string str=to_string(n);//22
            for(auto& x: str){
                mp[x]++;
            }
            for(auto& [key,value]:mp){
                if((key-'0')!=value){
                    n+=1;
                    flag=false;
                    mp.clear();
                    break;
                }
            }
            if(flag==true){
                ans=stoi(str);//22
                return ans;
            }
        }
        return -1;
    }
};