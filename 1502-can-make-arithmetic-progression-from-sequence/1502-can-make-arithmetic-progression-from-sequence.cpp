class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());

        int val = abs(arr[1] - arr[0]);


        for(int i = 2 ; i < n; i++ ) {
            if( arr[i] - arr[i-1] != val ){
                return false;
            }
        }
        return true;
    }
};
