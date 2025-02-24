class Solution {
public:
    string frequencySort(string s) {
        vector<int> count(128, 0);  // Support both lowercase and uppercase characters

        // Count frequencies
        for (char ch : s) {
            count[ch]++;
        }

        // Store character-frequency pairs
        vector<pair<char, int>> list;
        for (int i = 0; i < 128; i++) {
            if (count[i] > 0) { // Ignore characters with zero frequency
                list.push_back({(char)i, count[i]});
            }
        }

        // Sort by frequency in descending order
        sort(list.begin(), list.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;  // Higher frequency first
        });

        // Build the result string
        string result = "";
        for (const auto& p : list) {
            result.append(p.second, p.first);  // Append 'char' 'frequency' times
        }

        return result;
    }
};
