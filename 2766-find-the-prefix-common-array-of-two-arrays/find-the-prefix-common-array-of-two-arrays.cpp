class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();

        vector<int> ans(n,0);
        int prevcount=0;
        unordered_set<int> st;

        for(int i=0;i<n;i++){
            if(i==0 && (A[i]!=B[i])){
                ans[i]=0;
                st.insert(A[i]);
                st.insert(B[i]);
            }
            else if(A[i]!=B[i]){
                if(st.contains(A[i])){
                    prevcount++;
                }
                if(st.contains(B[i])){
                    prevcount++;
                }
                st.insert(A[i]);
                st.insert(B[i]);
                ans[i]=prevcount;
            }
            else if(A[i]==B[i]){
                prevcount++;
                ans[i]=prevcount;
            }
        }
        return ans;
    }
};