class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        int start = 1;

        vector<int>ans(n,1);

        for (int i = 0; i < n; i++) {

            ans[i] = ans[i] * start;
            start = start * nums[i];

        }

        int end = 1;

        for (int i = 0 ; i < n ; i++) {

            ans[n-i-1] = ans[n-i-1] * end;
            end = end * nums[n-i-1];

        }
        return ans;
    }
};