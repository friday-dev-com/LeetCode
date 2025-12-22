class Solution {
public:
    // god for the large number of test case;
    vector<int> findMissingElements(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin(),nums.end());
        vector<int>ans;

        for ( int i = 1 ; i < n; i++){
            if( nums[i] == nums[i-1]){
                continue;
            }

            for( int j = nums[i-1]+1; j < nums[i]; j++){
                ans.push_back(j);
            }
        }
        return ans;
    }
};



// class Solution {
// public:
//     vector<int> findMissingElements(vector<int>& nums) {
//         unordered_set<int>st;

//         int a = INT_MAX;
//         int b = INT_MIN;

//         for( int i = 0; i < nums.size(); i++ ){
//             int val = nums[i];
//             a = min(a,val);
//             b = max(b,val);
//             st.insert(val);
//         }
//         vector<int>ans;
//         for ( int i = a; i <= b; i++ ){
//             if(st.find(i) == st.end()){
//                 ans.push_back(i);
//             }
//         }
//         return ans;
//     }
// };