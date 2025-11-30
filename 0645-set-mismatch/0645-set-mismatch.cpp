class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();

        vector<int>ans;

        int loss = 0;
        int dub ;

        for ( int i = 0 ; i < n ; i++ ) {
            loss = ((loss ^ (i+1)) ^ abs(nums[i]));
            

            int index = abs(nums[i]) - 1;
            int val = nums[index];
            if( val < 0 ){
                dub = abs(nums[i]);
            }
            else{
                nums[index] = nums[index] * -1;
            }
        }
        loss = loss ^ dub;

        ans.emplace_back(dub);
        ans.emplace_back(loss);
        return ans;
    }
};