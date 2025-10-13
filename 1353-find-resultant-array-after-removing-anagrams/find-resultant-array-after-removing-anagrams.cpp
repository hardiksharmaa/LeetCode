class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        // vector<string> ans;//abba
        // string x=words[0];//aabb
        // ans.push_back(x);
        // sort(x.begin(),x.end());
        // for(int i=1;i<words.size();i++){
        //     string y=words[i];
        //     sort(words[i].begin(),words[i].end());//aabb
        //     if(x==words[i]){
        //         continue;
        //     }
        //     else{
        //         x=words[i];
        //         ans.push_back(y);

        //     }
        // }
        // return ans;

        vector<string> ans;
        unordered_map<char,int> prev;
        for(char c:words[0]){
            prev[c]++;
        }
        string x=words[0];
        ans.push_back(x);//abba
        for(int i=1;i<words.size();i++){
            string y=words[i];
            unordered_map<char ,int> curr;
            for(char c: words[i]){
                curr[c]++;
            }
            if(curr==prev){
                continue;
            }
            else{
                prev=curr;
                ans.push_back(y);
            }
        }
        return ans;
    }
};