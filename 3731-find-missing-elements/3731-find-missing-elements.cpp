class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int>st;

        int a = INT_MAX;
        int b = INT_MIN;

        for( int i = 0; i < nums.size(); i++ ){
            int val = nums[i];
            a = min(a,val);
            b = max(b,val);
            st.insert(val);
        }
        vector<int>ans;
        for ( int i = a; i <= b; i++ ){
            if(st.find(i) == st.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};