class Solution {
public:
    void solve(vector<vector<string>>&ans, vector<string>&sol, int n, int col,vector<int>&check_row,vector<int>&check_for_dig, vector<int>&check_bac_dig){

        if( col == n ){
            ans.push_back(sol);
            return;
        }

        for( int row = 0; row < n; row++){
            if(check_row[row] == 0 && check_for_dig[ row + col] == 0 && check_bac_dig[n-1+ col - row] == 0 ){

                check_row[row] = 1;
                check_for_dig[row + col] = 1;
                check_bac_dig[(n-1) + (col - row)] = 1;

                sol[row][col] = 'Q';
                solve(ans, sol, n, col+1,check_row, check_for_dig, check_bac_dig);

                sol[row][col] = '.';
                check_row[row] = 0;
                check_for_dig[row + col] = 0;
                check_bac_dig[(n-1) + (col - row)] = 0;
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>sol(n);
        string s(n,'.');

        for(int i = 0; i < n; i++){
            sol[i] = s;
        }
        vector<int>check_row(n,0);
        vector<int>check_for_dig(2*n-1, 0);
        vector<int>check_bac_dig(2*n-1, 0);

        solve(ans,sol,n,0,check_row, check_for_dig, check_bac_dig);
        return ans;
    }
};