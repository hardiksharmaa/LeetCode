class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> ans(n, 1); // default dry day with lake=1
        unordered_map<int, int> fullLake; // lake -> last day it was filled
        set<int> dryDays; // stores indices of dry days
        
        for (int i = 0; i < n; ++i) {
            if (rains[i] > 0) {
                int lake = rains[i];
                ans[i] = -1; // raining day
                
                // if this lake was already full, flood!
                if (fullLake.count(lake)) {
                    // find a dry day after the last time it was filled
                    auto it = dryDays.lower_bound(fullLake[lake]);
                    if (it == dryDays.end()) return {}; // no dry day → flood
                    ans[*it] = lake; // dry this lake
                    dryDays.erase(it);
                }
                
                fullLake[lake] = i; // mark this lake as full
            } 
            else {
                dryDays.insert(i); // possible future dry day
            }
        }
        return ans;
    }
};
