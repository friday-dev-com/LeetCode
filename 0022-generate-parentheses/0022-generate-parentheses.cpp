class Solution {
public:
    void solve( vector<string>&ans , string sol , int open , int close  ){
        if( open == 0 && close == 0){
            ans.push_back(sol);
            return;
        }

        if ( open > 0){
            sol.push_back('(');
            solve(ans,sol,open-1,close);
            sol.pop_back();
        }
        if(close > 0){
            if(close > open){
                sol.push_back(')');
                solve(ans,sol,open,close-1);
                sol.pop_back();
            }
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string sol = "";
        int open = n;
        int close = n;

        solve(ans,sol,open,close);
        return ans;
    }
};