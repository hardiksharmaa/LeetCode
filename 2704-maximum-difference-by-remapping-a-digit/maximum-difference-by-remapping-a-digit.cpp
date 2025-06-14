class Solution {
public:
    int minMaxDifference(int num) {
        string str=to_string(num);
        string maxi="";
        string mini="";
        char ele=' ';
        for(int i=0;i<str.size();i++){// find the first non 9 
            if(str[i]!='9'){
                ele=str[i];
                break;
            }
        }

        for(int i=0;i<str.size();i++){
            if(ele==str[i]) maxi+='9';
            else maxi+=str[i];
        }// replace that digit with 9 for maxi

        for(int i=0;i<str.size();i++){
            if(str[0]==str[i]) mini+='0';
            else mini+=str[i];
        }//replace first digit with 0 for mini

        return stoi(maxi)-stoi(mini);
    }
};