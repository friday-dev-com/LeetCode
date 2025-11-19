class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>st;

        for(int &it:nums ) {
            st.insert(it);
        }

        return (st.size() != nums.size());
    }
};

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_map<int,int>mp;

//         for (int &it : nums) {
//             mp[it]++;

//             if(mp[it] >= 2){
//                 return true;
//             }
//         }
        
//         return false;
//     }
// };