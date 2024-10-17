class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        
        // Traverse through the string
        for (int i = 0; i < num.size(); i++) {
            // Remove the larger element from the stack when k > 0
            while (!st.empty() && k > 0 && st.top() > num[i]) {
                st.pop();
                k--;
            }
            // Push the current digit onto the stack
            st.push(num[i]);
        }

        // If k is still greater than 0, remove the remaining digits from the end
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        // Create the result string from the stack
        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        // Reverse the result string (since we built it from the stack)
        reverse(result.begin(), result.end());

        // Remove leading zeros
        int index = 0;
        while (index < result.size() && result[index] == '0') {
            index++;
        }

        result = result.substr(index);

        // Return "0" if the result is empty
        return result.empty() ? "0" : result;
    }
};