class Solution {
public:
    string sortSentence(string s) {
        vector<string>mp(10);

        string st = "";
        for (auto ch : s){
            if(isalpha(ch)){
                st.push_back(ch);
            }
            else if(isdigit(ch)){
                int index = ch - '0';
                st.push_back(' ');
                mp[index] = st;

                st = "";
            }
        }
        string ans = "";
        for( int i = 1; i <= 9; i++ ){
            string temp = mp[i];
            ans = ans + temp;
        }
        ans.pop_back();
        return ans;
    }
};