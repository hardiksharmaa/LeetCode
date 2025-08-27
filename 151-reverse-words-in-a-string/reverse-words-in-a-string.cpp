class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, res;

        while (ss >> word) {
            if (!res.empty()) res = " " + res; 
            res = word + res;            
        }
        return res;
    }
};
