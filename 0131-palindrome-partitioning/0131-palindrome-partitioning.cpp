class Solution {
public:
    bool paindrom_check(string s){
        int start = 0;
        int end = s.size() - 1;

        while(start < end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    void solve(string &s, vector<vector<string>> &ans,
               vector<string> &sol, int index){

        if(index == s.length()){
            ans.push_back(sol);
            return;
        }

        string a = ""; 
        for(int i = index; i < s.length(); i++){
            a.push_back(s[i]);

            // check palindrome of CURRENT substring
            if(paindrom_check(a)){
                sol.push_back(a);          // choose
                solve(s, ans, sol, i + 1);
                sol.pop_back();           // backtrack
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> sol;
        solve(s, ans, sol, 0);
        return ans;
    }
};
