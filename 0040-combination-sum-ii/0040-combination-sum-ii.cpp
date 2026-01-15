class Solution {
public:
    void solve(vector<int>& candidates, vector<vector<int>>&ans, vector<int>&sol, int sum, int i)
    {

        if(sum == 0){
            ans.push_back(sol);
            return;
        }

        if( i == candidates.size())
        {
            return;
        }


        for(int index = i; index < candidates.size(); index++)
        {
            int val = candidates[index];

            if( val > sum)
            {
                break;
            }

            if( index > i && candidates[index-1] == candidates[index])
            {
                continue;
            }
            sol.push_back(val);
            solve(candidates, ans, sol, sum-val, index+1);
            sol.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>sol;

        solve(candidates, ans, sol, target, 0);

        return ans;
    }
};