class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        //sort -> dividing smaller and larger halfs

        vector<int> sorted(nums);
        sort(sorted.begin(), sorted.end());

        int n=nums.size();
        int mid=(n+1)/2;
        int a=mid-1;
        int b=n-1;

        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i]=sorted[a--];
            }
            else{
                nums[i]=sorted[b--];
            }
        }
    }
};