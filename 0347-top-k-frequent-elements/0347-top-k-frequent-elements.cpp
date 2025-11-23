// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int, int> m;
//         for(int val:nums)
//             m[val]++;
        
//         priority_queue<pair<int, int>> pq;
//         for(auto pair: m)
//             pq.push({pair.second, pair.first});
        
//         vector<int> ans;
//         int c = 0;
//         while(!pq.empty()){
//             if(++c>k) break;
//             auto val = pq.top();
//             pq.pop();
//             ans.push_back(val.second);
//         }
//         return ans;
//     }
// };
 
 

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>mp;

        for( int &it : nums ) {
            mp[it]++;
        }

        priority_queue<pair<int,int>>pq;

        for( auto &it : mp ) {
            int val   = it.first;
            int count = it.second;

            pq.push( {count,val} );
        }
        
        vector<int>sol;

        while( k-- ) {
            pair<int,int> val = pq.top();
            pq.pop();
            int number = val.second;

            sol.emplace_back( number ); 
        }
        return sol;

    }
};