class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();

        vector<int>ans(2);
        for ( int i = 0; i < n; i++ ){
            int index = abs(nums[i])-1;

            if( nums[index] > 0 ){
                nums[index] *= -1;
            }

            else{
                ans[0] = nums[i];
            }
        }

        for( int i = 0 ; i < n ;i++){
            if(nums[i] > 0){
                ans[1] = nums[i]+1;
                break;
            }
        }
        return ans;
    }
};