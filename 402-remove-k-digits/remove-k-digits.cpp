class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for (int i = 0; i < num.size(); i++) {
            while (!st.empty() && k > 0 && st.top() > num[i]) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        int index = 0;
        while (index < result.size() && result[index] == '0') {
            index++;
        }

        result = result.substr(index);
        return result.empty() ? "0" : result;
    }
};