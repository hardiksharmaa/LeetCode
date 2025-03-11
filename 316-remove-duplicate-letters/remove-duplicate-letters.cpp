class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> lastIndex(26, -1); 
        vector<bool> inStack(26, false); 
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            lastIndex[s[i] - 'a'] = i;
        }
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];

            if (inStack[ch - 'a']) continue;
            while (!st.empty() && st.top() > ch && lastIndex[st.top() - 'a'] > i) {
                inStack[st.top() - 'a'] = false; 
                st.pop();
            }
            st.push(ch);
            inStack[ch - 'a'] = true;
        }

        string result;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end()); 
        return result;
    }
};
