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

// recursive approcah
class Solution {

    private: 
    void dfs(TreeNode *node, vector<int> &inorder) {
        if(node == NULL) return;

        dfs(node -> left, inorder);
        inorder.push_back(node->val);
        dfs(node->right, inorder);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>inorder;
        dfs(root, inorder);
        return inorder;
    }
};
