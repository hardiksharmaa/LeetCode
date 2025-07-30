class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string x: tokens){
            if(x=="+"||x=="-"||x=="*"||x=="/"){
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                int ans=0;

                if(x=="+") ans=a+b;
                else if(x=="-") ans=a-b;
                else if(x=="*") ans=a*b;
                else if(x=="/") ans=a/b;
                st.push(ans);
            }
            else{
                st.push(stoi(x));
            }
        }
        return st.top();
    }
};