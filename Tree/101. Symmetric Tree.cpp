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
    bool isSymmetric(TreeNode* root) {
        return root == NULL || isSymmetricChecker(root->left, root->right);
    }
    bool isSymmetricChecker(TreeNode* left, TreeNode* right) {
        if((left==NULL) || (right==NULL)) 
            return left==right;
        
        if(left->val!=right->val) return false;
        
        return isSymmetricChecker(left->left, right->right) 
            && 
            isSymmetricChecker(left->right, right->left);
    }
};
