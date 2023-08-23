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
    
    int depth(TreeNode* root) {
    if(root == NULL) 
        return INT_MAX;
        if(root->left == NULL && root->right == NULL) return 1;
        int x = depth(root->left);
        int y = depth(root->right);
        
        return min(x, y) + 1;
    }
    int minDepth(TreeNode* root) {
    if(root == NULL)
        return 0;     
    return depth(root);
    }
};
