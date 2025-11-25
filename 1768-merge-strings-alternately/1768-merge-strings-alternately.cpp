class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1 = 0;
        int s2 = 0;

        int e1 = word1.size();
        int e2 = word2.size();

        string ans = "";

        while ( s1<e1 && s2 <e2 ) {
            ans += word1[s1++];
            ans += word2[s2++];
        }

        if ( s1<e1 ) ans += word1.substr(s1,e1);
        if ( s2<e2 ) ans += word2.substr(s2,e2);

        return ans;
    }
};