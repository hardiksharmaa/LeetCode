class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double maxlen=-1;
        int maxarea=-1;
        for(int i=0;i<dimensions.size();i++){
            double length=sqrt((dimensions[i][0]*dimensions[i][0])+(dimensions[i][1]*dimensions[i][1]));
            int area=dimensions[i][0]*dimensions[i][1];
            if(length>maxlen){
                maxlen=length;
                maxarea=area;
            }
            else if(length==maxlen){
                maxarea=max(maxarea,area);
            }
        }
        return maxarea;
    }
};