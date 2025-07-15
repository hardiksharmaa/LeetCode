class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int match=0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int i=0;
        int j=0;
        while(i<players.size() && j<trainers.size()){
            if(players[i]<=trainers[j]){
                match++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return match;
    }
};