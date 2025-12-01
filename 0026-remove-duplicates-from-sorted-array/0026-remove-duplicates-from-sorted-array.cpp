class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        int pointer = 1;
        int num = nums[0];

        for ( int i = 1; i < n; i++ ) {
            if ( nums[i] != num ) {
                num = nums[i];
                nums[pointer] = num;
                pointer++;
            } 
        }
        return pointer;
    }
};