class Solution {
public:
    string Reverse(string str, int a){
        if (a>str.size()) a=str.size();
        reverse(str.begin(),str.begin()+a);
        return str;
    }
    string reverseStr(string s, int k) {
        int i=0;
        int j=0;
        int x=k;
        string ans="";
        while(j<s.length()){
            string str="";
            while(j<i+2*x && j<s.length()){
                j++;
            }
            str=s.substr(i,j-i);
            ans+=Reverse(str,k);
            i=j;
        }
        return ans;
    }
};