class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {

        int n = arr.size();

        int a = arr[0];
        int b = arr[0];

        for(auto it : arr){
            a = min(it,a);
            b = max(it,b); 
        }

        if ((b - a) % (n - 1) != 0) return false;

        int d = ((b-a)/(n-1));

        unordered_set<int>mp(arr.begin(),arr.end());

        for( int i = 0; i<n; i++ ){
            int val = a + (i) * d;
            if(mp.find(val) == mp.end()){
                return false;
            }
        }
        return true;
    }
};