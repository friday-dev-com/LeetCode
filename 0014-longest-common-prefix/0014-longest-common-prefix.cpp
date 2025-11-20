class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }

        int minLength = strs[0].length();
        for (int i = 1 ; i < strs.size() ; i++){
            minLength = min(minLength,(int)strs[i].length()); 
        }

        int l = 0;
        while( l < minLength){
            char ch = strs[0][l];
            for(int i = 1 ;  i < strs.size() ; i++){
                if(ch!= strs[i][l]){
                    return strs[0].substr(0,l);
                }
            }
            l++;
        }
        return strs[0].substr(0,minLength);
    }
};