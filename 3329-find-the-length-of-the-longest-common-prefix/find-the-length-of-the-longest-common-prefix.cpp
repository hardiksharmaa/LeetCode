class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> hs;
        for(int i=0;i<arr1.size();i++){
            int num=arr1[i];
            while(num!=0){
                hs.insert(num);
                num/=10;
            }
        }
        int pre=0;
        for(int i=0;i<arr2.size();i++){
            int num=arr2[i];
            while(num!=0){
                if(hs.find(num)!=hs.end()){
                    pre=max(pre,num);
                    break;
                }
                num/=10;
            }
        }
        if(pre==0) return 0;
        string ans=to_string(pre);
        return ans.length();
    }
};