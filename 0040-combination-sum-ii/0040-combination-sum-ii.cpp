class Solution {
public:
    void solve(vector<int>& arr, int t, vector<vector<int>>&ans, vector<int>sol, int i){

        if(t == 0){
            ans.push_back(sol);
            return;
        }

        for ( int index = i; index < arr.size(); index++){
            if(arr[index] > t){
                break;
            }
            if( index > i && arr[index] == arr[index-1]){
                continue;
            }
            sol.push_back(arr[index]);
            solve(arr,t-arr[index],ans,sol,index+1);
            sol.pop_back();
        }
    
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>sol;
        solve(candidates,target,ans,sol,0);
        return ans;
    }
};