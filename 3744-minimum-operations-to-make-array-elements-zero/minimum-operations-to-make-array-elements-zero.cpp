class Solution {
public:
    long long prefixSteps(long long x) {
        if (x <= 0) return 0;
        long long total = 0;
        long long power = 1;
        int steps = 1;
        while (power <= x) {
            long long nextPower = power * 4;
            long long endRange = min(x, nextPower - 1);
            total += (endRange - power + 1) * steps;
            power = nextPower;
            steps++;
        }
        return total;
    }

    long long minOperations(vector<vector<int>>& queries) {
        long long ans = 0;
        for (auto& q : queries) {
            long long l = q[0], r = q[1];
            long long steps = prefixSteps(r) - prefixSteps(l - 1);
            ans += (steps + 1) / 2; 
        }
        return ans;
    }
};