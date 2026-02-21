class Solution {
public:
    int kthGrammar(int n, int k) {
        if( n == 1 && k == 1 ){
            return 0;
        }

        int total = pow(2,n-1);

        int half = total / 2;

        if( k > half ) {
            return !kthGrammar(n-1, k - half);
        }
        else{
            return kthGrammar(n-1, k);
        }
    }
};