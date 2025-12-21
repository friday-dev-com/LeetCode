class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        for(auto ch : address){
            if(isdigit(ch)){
                s.push_back(ch);
            }
            else{
                s.push_back('[');
                s.push_back(ch);
                s.push_back(']');
            }
        }
        return s;
    }
};