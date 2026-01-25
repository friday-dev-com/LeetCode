class Solution {
public:
    int solve(int c, int n, vector<int>&row, vector<int>&dig1_used, vector<int>&dig2_used) {
        if( c == n ){
            return 1;
        }

        int ans = 0;

        for( int r = 0; r < n; r++) {

            if( row[r] == 0 &&  dig1_used[r + c] == 0 && dig2_used[n-1 + c - r] == 0) {
                row[r] = 1;
                dig1_used[r+c] = 1;
                dig2_used[n-1 + c - r] = 1;

                ans += solve(c+1,n, row, dig1_used, dig2_used);

                row[r] = 0;
                dig1_used[r+c] = 0;
                dig2_used[n-1 + c - r] = 0;
            }
        }
        return ans;
    }
    int totalNQueens(int n) {
        vector<int>row(n,0);
        vector<int>dig1_used(2*n-1,0);
        vector<int>dig2_used(2*n-1,0);

        return solve(0,n,row, dig1_used, dig2_used);
    }
};