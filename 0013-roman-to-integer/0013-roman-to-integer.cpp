class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;


        int n = s.length();
        unordered_map<char,int>mp = { {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}};

        for(int i = 1; i < n; i++){
            int prev = mp[s[i-1]];
            int next = mp[s[i]];

            if(prev < next ){
                sum = sum - prev;
            }
            else{
                sum = sum + prev;
            }
        }
        sum += mp[s[n-1]];
        return sum;
    }
};