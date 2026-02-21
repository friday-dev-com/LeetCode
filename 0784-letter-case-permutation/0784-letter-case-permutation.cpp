class Solution {
public:
    void solve( string ip, string op, vector<string>&sol ) {

        if( ip.size() == 0 ) {
            sol.push_back(op);
            return;
        }

        char ch = ip[0];
        ip = ip.substr(1);

        if(isdigit(ch)) {
            op.push_back(ch);
            solve(ip, op, sol);
        }

        else{
            string op1 = op;
            string op2 = op;

            op1.push_back(tolower(ch));
            op2.push_back(toupper(ch));

            solve(ip, op1, sol);
            solve(ip, op2, sol);
        }
        
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>sol;

        string op = "";

        solve(s,op,sol);

        return sol;
    }
};