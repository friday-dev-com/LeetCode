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
    bool checkTree(TreeNode* root) {
        if( root == NULL ) {
            return true;
        }

        if(root->left &&root->right) {
            int a = root->left->val;
            int b = root->right->val;

            if( a + b == root->val) {
                return true;
            }
            return false;
        }
        else if( root->left){
            if(root->left->val == root->val) {
                return true;
            }
        }

        else if( root->right){
            if(root->right->val == root->val) {
                return true;
            }
        }
        return false;

    }
};