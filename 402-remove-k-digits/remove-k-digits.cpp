class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for(int i=0;i<num.size();i++){
            while(!st.empty()&& num[i]<st.top()&& k>0){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        string result="";
        while(!st.empty()){
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        int ind=0;
        while(ind<result.size()&& result[ind]=='0'){
            ind++;
        }
        result=result.substr(ind);
        return result.empty()?"0":result;
    }
};