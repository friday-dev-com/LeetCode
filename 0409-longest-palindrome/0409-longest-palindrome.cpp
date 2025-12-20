class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;

        for(auto it:s){
            mp[it]++;
        }

        int count = 0;
        int flag = 0;
        for(auto it: mp){
            int val = it.second;
            if(val%2 ==0){
            count +=val;
            }
            else{
            flag =1;
            count += ((int)val/2)*2;
            }
        }
        if(flag){
            count+=1;
        }
        return count;
    }
};