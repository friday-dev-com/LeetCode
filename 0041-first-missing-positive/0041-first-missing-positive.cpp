class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    
        int n = nums.size();
        //mark the -ve and numbers grater than the array of nums so that
        // i can use the array to mark the preseent of the element inside the array

        for ( int i = 0 ; i < n; i++){
            if(nums[i] <= 0 || nums[i] > n ){
                nums[i] = n+1;
            }
        }

        // mark the elemtes

        for ( int i = 0; i < n; i++ ){
            int val = abs(nums[i]);

            if( val <= n){
                if(nums[val-1] > 0){
                    nums[val - 1]  = -nums[val-1];
                }
            }
        }

        //find the missing nummber;

        for ( int i = 0; i < n ; i++){
            if( nums[i] > 0){
                return i+1;
            }
        }

        //if there is no missing number then the just number nest to the will be the number;
        return n+1;
    
    }
};