// class Solution {
// public:
//     int numberOfPoints(vector<vector<int>>& nums) {
//         set<int> covered;
//         for(auto& num: nums){
//             for(int i=num[0];i<=num[1];i++){
//                 covered.insert(i);
//             }
//         }
//         return covered.size();
//     }
// };
class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> covered(101);
        for(auto& num: nums){
            for(int i=num[0];i<=num[1];i++){
                covered[i]=1;
            }
        }
        int count=0;
        for(int i=0;i<covered.size();i++){
            if(covered[i]==1) count++;
        }
        return count;
    }
};