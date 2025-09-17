class Solution {
public:
    bool backtrack(vector<int> &v, vector<int> &sides, int i, int target) {
        if (i == v.size()) 
            return sides[0] == sides[1] && sides[1] == sides[2] && sides[2] == sides[3];

        for (int j = 0; j < 4; j++) {
            if (sides[j] + v[i] > target) continue;
            sides[j] += v[i];
            if (backtrack(v, sides, i + 1, target)) return true;
            sides[j] -= v[i];
            if (sides[j] == 0) break;
        }
        return false;
    }

    bool makesquare(vector<int>& matchsticks) {
        int sum = accumulate(matchsticks.begin(), matchsticks.end(), 0);
        if (sum % 4 != 0 || matchsticks.size() < 4) return false;
        sort(matchsticks.begin(), matchsticks.end(), greater<int>());
        vector<int> sides(4, 0);
        return backtrack(matchsticks, sides, 0, sum / 4);
    }
};