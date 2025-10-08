class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> ans;
        for(int x: spells){
            int i=0,j=potions.size()-1;
            int key=potions.size();
            while(i<=j){
                long long mid=i+(j-i)/2;
                if((long long)potions[mid]*x>=success){
                    key=mid;
                    j=mid-1;
                }
                else{
                    i=mid+1;
                }
            }
            ans.push_back(potions.size()-key);
        }
        return ans;
    }
};