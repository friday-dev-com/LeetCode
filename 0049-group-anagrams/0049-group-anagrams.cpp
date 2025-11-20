class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>>ans;
        int n = strs.size();

        if(n == 0){
            return ans;
        }
        

        unordered_map<string,vector<string>>mp;

    

        for ( string &it: strs) {

            string temp = it;
            sort(temp.begin(),temp.end());
            
            if( mp.count(temp) ) {
                mp[temp].push_back(it);
            }
            else{
                mp[temp].push_back(it);
                // mp.insert({temp,{it}});
            }

        }
        for(auto it : mp){
            ans.emplace_back(it.second);
        }

        return ans;
    }
};