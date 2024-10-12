class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int n: nums){
            freq[n]++;
        }

        vector<vector<int>> bucket(nums.size()+1);
        for(auto& pair: freq){
            int num=pair.first;
            int frequency=pair.second;
            bucket[frequency].push_back(num);
        }
        vector<int> topK;

        for(int i=bucket.size()-1;i>=0 && topK.size()<k; --i){
            if(!bucket[i].empty()){
                topK.insert(topK.end(),bucket[i].begin(), bucket[i].end());
            } 
        }
        return vector<int>(topK.begin(),topK.begin()+k);
    }
};