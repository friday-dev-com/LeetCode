class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;

        int n = nums.size();

        sort(nums.begin(),nums.end());
        for (int i = 0 ; i < n ; i++ ) {
            if ( i > 0 && nums[i] == nums[i-1]) {
                continue;
            }

            long long one = nums[i];

            for( int j = i+1 ; j < n ;j++) {
                if ( j > i+1 && nums[j] == nums[j-1] ) {
                    continue;
                }

                int start = j+1;
                int end = n-1;
                long long two = nums[j];

                while ( start < end ) {
                    long long sum = one + two + nums[start] + nums[end] ;

                    if ( sum > target) {
                        end--;
                    }
                    else if ( sum < target) {
                        start++;
                    }
                    else{
                        ans.push_back({(int)one,(int)two, nums[start], nums[end] });

                        start++;
                        end--;

                        while ( start < end && nums[start] == nums[start-1]){
                            start++;
                        }
                        while( start < end && nums[end] == nums[end+1]) {
                            end--;
                        }
                    }
                }
            }
        }

        return ans;
    }
};