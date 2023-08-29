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
    void invertBinaryTree(TreeNode* root) {
        if(root == NULL) {
            return;
        }
        
        TreeNode* l = root->left;
        root->left = root->right;
        root->right = l;
        invertBinaryTree(root->left);
        invertBinaryTree(root->right);
    }
    
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* ans = root;
        invertBinaryTree(root);
        return ans;
    }
};
