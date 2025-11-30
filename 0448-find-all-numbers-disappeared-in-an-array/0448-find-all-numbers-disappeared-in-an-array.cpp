class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        vector<int>ans;

        for( int i = 0 ; i < n ; i++){
            int index = abs(nums[i])-1;
            int val = nums[index];
            if(val > 0 ){
                nums[index] = nums[index] * -1;
            }
        }
        for (int i = 0 ; i < n ; i++ ) {
            if (nums[i] > 0) {
                ans.emplace_back(i+1);
            }
        }
        return ans;
    }
};  