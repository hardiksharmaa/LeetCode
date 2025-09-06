class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        string ans = "";
        stringstream ss(sentence);
        string word = "";

        while (ss >> word) {
            string temp = word;
            for (auto &key : dictionary) {
                if (word.rfind(key, 0) == 0) { 
                    if (key.size() < temp.size()) {
                        temp = key; 
                    }
                }
            }
            if (ans.empty()) ans = temp;
            else ans += " " + temp;
        }

        return ans;
    }
};