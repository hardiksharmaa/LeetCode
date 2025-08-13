#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int sumB = accumulate(bobSizes.begin(), bobSizes.end(), 0);

        int diff = (sumB - sumA) / 2;

        unordered_set<int> bobSet(bobSizes.begin(), bobSizes.end());

        for (int a : aliceSizes) {
            if (bobSet.count(a + diff)) {
                return {a, a + diff};
            }
        }
        return {};
    }
};
