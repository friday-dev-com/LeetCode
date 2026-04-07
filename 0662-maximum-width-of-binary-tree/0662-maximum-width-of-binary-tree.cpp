/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {

        if( root == NULL ) {
            return 0;
        }
        queue<pair<TreeNode*,uint>> q;

        q.push({root,0});

        long long maxLength = 0;

        while( !q.empty() ) {

            int n = q.size();
            long long minIndex = 0;
            long long maxIndex = 0;

            for( int i = 0; i < n; i++) {

                auto it = q.front();
                q.pop();

                TreeNode* temp = it.first;
                long long index = it.second;
                cout << index << endl;

                if( i == 0 ) {
                    minIndex = index;
                }

                if( i == n-1 ) {
                    maxIndex = index;
                   
                }


                if( temp->left ) {
                    q.push( {temp->left, 2 * (index ) });
                }

                if( temp->right ) {
                    q.push( {temp->right, 2 * (index ) + 1});
                }
                

            }

            maxLength = max(maxLength, (maxIndex - minIndex) + 1);
            
        }
        return maxLength;

    }
};