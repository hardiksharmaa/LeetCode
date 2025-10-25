class Solution {
public:
    string lexSmallest(string s) {
        string best = s;
        int n = s.size();
        for (int i = 1; i <= n; i++) {
            string temp = s;
            reverse(temp.begin(), temp.begin() + i);
            best = min(best, temp);
        }
        for (int i = 0; i < n; i++) {
            string temp = s;
            reverse(temp.begin() + i, temp.end());
            best = min(best, temp);
        }
        return best;
    }
};