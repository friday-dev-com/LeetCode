class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {

        int n = arr.size();

        int a = INT_MAX;
        int b = INT_MIN;

        for(auto it : arr){
            a = min(it,a);
            b = max(it,b); 
        }
        if (b == a) return true;

        if ( (b-a)%(n-1) != 0 ){
            return false;
        }
        int d = (b - a)/ (n-1);

        int i = 0;
        while ( i < n ){
            int val = arr[i];
            if ( val == a + i * d){
                i++;
            }
            else{
                if ( ((val - a)%d) != 0 ){
                    return false;
                }
                int index = (val - a)/d;

                if ( val == arr[index]) {
                    return false;
                }
                swap(arr[i],arr[index]);

            }
        }
        return true;
    }
};