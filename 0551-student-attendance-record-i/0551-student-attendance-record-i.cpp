class Solution {
public:
    bool checkRecord(string s) {
        int count_a = 0;
        int count_b = 0;
        int n = s.size();

        for ( int i = 0 ; i < n ; i++ ) {
            if(s[i] == 'A') {
                count_a++;
                if(count_a >= 2){
                    return false;
                }

                count_b = 0;
            }
            else if(s[i] == 'L'){
                count_b++;
                if ( count_b >= 3 ){
                    return false;
                }
            }
            else {
                count_b = 0;
            }
        }
        return true;
    }
};