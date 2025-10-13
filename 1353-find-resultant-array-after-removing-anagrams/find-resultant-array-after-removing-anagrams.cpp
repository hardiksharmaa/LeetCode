class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;//abba
        string x=words[0];//aabb
        ans.push_back(x);
        sort(x.begin(),x.end());
        for(int i=1;i<words.size();i++){
            string y=words[i];
            sort(words[i].begin(),words[i].end());//aabb
            if(x==words[i]){
                continue;
            }
            else{
                x=words[i];
                ans.push_back(y);

            }
        }
        return ans;
    }
};