/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isLeafNode(TreeNode* root) {

        if (root->left == NULL && root->right == NULL) {
            return true;
        }
        return false;
    }

    void solve(TreeNode* root, vector<string>& sol, string& ans) {

        if (root == NULL) {
            return;
        }

        if (isLeafNode(root)) {
            ans += to_string(root->val);
            sol.push_back(ans);
            ans.pop_back();
            return;
        }

        ans += to_string(root->val);
        ans += "->";
        int n = ans.size();
        solve(root->left, sol, ans);
        cout << ans << endl;
        ans.resize(n);
        solve(root->right, sol, ans);
        ans.resize(n);
        cout << ans << endl;
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string ans = "";

        if (root == NULL) {
            return {};
        }
        vector<string> sol;
        solve(root, sol, ans);

        return sol;
    }
};