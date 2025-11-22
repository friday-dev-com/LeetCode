class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1 ;
        int number = nums[0];

        for( int i = 1 ; i < nums.size() ; i++ ) {
            if( nums[i] == number ) {
                count++;
            }
            else{
                count--;

                if( count == 0 ) {
                    count = 1;
                    number = nums[i];
                }
            }
        }
        return number;
    }
};