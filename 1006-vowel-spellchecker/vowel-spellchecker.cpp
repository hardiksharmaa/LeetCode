class Solution {
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> exactMatch(wordlist.begin(), wordlist.end());
        unordered_map<string, string> caseInsensitiveMap;
        unordered_map<string, string> vowelInsensitiveMap;

        auto toLower = [](const string &s) {
            string lower = s;
            for (char &ch : lower) ch = tolower(ch);
            return lower;
        };

        auto maskVowels = [](const string &s) {
            string masked = s;
            for (char &ch : masked) {
                char lower = tolower(ch);
                if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                    ch = '*'; 
                else
                    ch = lower;
            }
            return masked;
        };

        for (const string &word : wordlist) {
            string lower = toLower(word);
            string masked = maskVowels(word);

            if (!caseInsensitiveMap.count(lower)) caseInsensitiveMap[lower] = word;
            if (!vowelInsensitiveMap.count(masked)) vowelInsensitiveMap[masked] = word;
        }

        vector<string> ans;
        for (string query : queries) {
            if (exactMatch.count(query)) {
                ans.push_back(query);
            }
            else {
                string lowerQuery = toLower(query);
                string maskedQuery = maskVowels(query);

                if (caseInsensitiveMap.count(lowerQuery)) {
                    ans.push_back(caseInsensitiveMap[lowerQuery]);
                }
                else if (vowelInsensitiveMap.count(maskedQuery)) {
                    ans.push_back(vowelInsensitiveMap[maskedQuery]);
                }
                else {
                    ans.push_back("");
                }
            }
        }
        return ans;
    }
};