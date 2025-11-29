class Solution {
public:
    
    int bitwiseComplement(int n) {
        if ( n == 0 ){
            return 1;
        }
        int val = n ;
        int mask = 0;

        while ( val != 0) {
            val = val >> 1;
            mask = mask<<1 | 1;
        }
        cout <<mask;
        return ~n & mask;
    }
};