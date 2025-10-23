class Solution {
public:
    bool hasSameDigits(string s) {
        string ss=s;//"3902"
        int n=ss.length();//4
        while(n>2){
            string str="";
            for(int i=0;i<n-1;i++){
                int x=((ss[i]-'0')+(ss[i+1]-'0'))%10;//2
                str+=x+'0';//"292"
            }
            ss=str;
            n=ss.length();
        }
        if(ss[0]==ss[1]) return true;
        else return false;
    }
};