class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();

        int front = 0;
        int back = 0;

        vector<bool>presence(256,false);
        int sol = 0;
        int ans = 0;

        while( front < n){
            // if the present value is not presnt in window;

            int val = s[front];

            if(presence[val] == false){
                presence[val] = true;
                front++;
                ans++;
                sol = max(sol,ans);
            }
            else{
                while(presence[val]){
                    presence[s[back]] = false;
                    back++;
                    ans--;
                }
            }
            
        }
        return sol;
    }
};