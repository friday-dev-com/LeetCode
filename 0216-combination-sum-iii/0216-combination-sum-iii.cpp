class Solution {
public:
    void solve( vector<int>&arr, vector<vector<int>>&ans, vector<int>&sol, int k, int n, int i )
    {
        if( k == 0 and n == 0){
            ans.push_back(sol);
            return;
        }

        if( k == 0 ){
            return;
        }

        for( int index  = i; index < arr.size(); index++ ){
            
            int val = arr[index];

            if( val > n ){
                break;
            }

            sol.push_back(val);
            solve(arr, ans, sol, k-1, n - val, index+1);
            sol.pop_back();

        }

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>sol;
        vector<int>arr = {1,2,3,4,5,6,7,8,9};

        solve(arr,ans, sol, k, n, 0);
        return ans;
    }
};