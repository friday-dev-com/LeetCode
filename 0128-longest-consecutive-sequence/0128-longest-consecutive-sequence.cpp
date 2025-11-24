class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        
        if(nums.empty()){
            return 0;
        }
        unordered_set<int> st(nums.begin(),nums.end());
        
        long long count = 1;

        for ( int it: st ) {

            int val = it;

            if( !st.count(val-1) ) {

                long long temp = 1;
                long long x = val;

                while ( st.count(x+1) ) {
                    temp++;
                    x++;
                }
                count = max(count,temp);
            }
        }

        return count;
    }
};