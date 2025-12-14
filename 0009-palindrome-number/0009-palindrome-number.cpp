class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        if ( x < 0 ){
            return false;
        }   
        long long  ans = 0;
        while ( x != 0){
            int val = x%10;
            x = x/10;
            ans = (ans*10)+val;
        }
        if( ans == n){
            return true;
        }
        return false;
    }
};