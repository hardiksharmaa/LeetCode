class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        int left=0;
        int right=col-1;
        while(left<=right){
            int midcol=left+(right-left)/2;
            int maxrow=0;
            for(int i=0;i<row;i++){
                if(mat[i][midcol]>mat[maxrow][midcol]) maxrow=i;
            }
            int leftN=(midcol>0)? mat[maxrow][midcol-1]: -1;
            int rightN=(midcol<col-1)? mat[maxrow][midcol+1]: -1;
            
            if(mat[maxrow][midcol]>leftN && mat[maxrow][midcol]>rightN) return {maxrow,midcol};
            else if(mat[maxrow][midcol]<leftN) right=midcol-1;
            else left=midcol+1;

        }
        return {-1,-1};
    }
};