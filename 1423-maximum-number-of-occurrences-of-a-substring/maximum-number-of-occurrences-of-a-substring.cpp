class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string,int> freq;
        unordered_map<char,int> letters;
        int maxi=0;
        int left=0;
        for(int right=0;right<s.length();right++){
            letters[s[right]]++;//updating the curr ele
            if(right-left+1>minSize){
                letters[s[left]]--;//shrinking window
                if(letters[s[left]]==0){
                    letters.erase(s[left]);
                }
                left++;
            }
            if(right-left+1==minSize){
                if(letters.size()<=maxLetters){
                    string str=s.substr(left,minSize);
                    freq[str]++;
                    maxi=max(maxi,freq[str]);
                }
            }
        }
        return maxi;
    }
};