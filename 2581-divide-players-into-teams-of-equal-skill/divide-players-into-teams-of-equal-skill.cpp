class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int arr[1001];
        int sum=0;
        int n=skill.size();
        int team=n/2;
        long long ans=0;
        for(int i=0;i<n;i++){
            sum+=skill[i];
            arr[skill[i]]++;
        }
        if(sum%team!=0) return -1;
        int target=sum/team;
        for(int i=0;i<n;i++){
            long long rem=target-skill[i];
            if(arr[rem]>0){
                ans+=rem*skill[i];
                arr[rem]--;
            }
            else{
                return -1;
            }

        }
        return ans/2;
    }
};