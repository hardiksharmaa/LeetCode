class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                // Check if stack is empty before trying to access the top element
                if(st.empty()) return false;

                char topChar = st.top();

                if((topChar == '(' && s[i] == ')') || 
                   (topChar == '{' && s[i] == '}') || 
                   (topChar == '[' && s[i] == ']')) {
                    st.pop();
                } else {
                    return false;  // Mismatch found
                }
            }
        }

        return st.empty();  // If stack is empty, it means the string is valid
    }
};