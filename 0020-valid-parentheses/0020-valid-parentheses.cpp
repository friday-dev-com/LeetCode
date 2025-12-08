class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        unordered_map<char,int>symbol = { {'(',-1},{'{',-2},{'[',-3}, {')',1},{'}',2},{']',3} };

        for (char it : s){
            if (symbol[it] < 0){
                st.push(it);
            }
            else{
                bool is_empty = st.empty();
                if(is_empty){
                    return false;
                }
                char top = st.top();
                if ( symbol[top] + symbol[it] != 0){
                    return false;
                }
                st.pop();
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};