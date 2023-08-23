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
    int storeSum = 0;
public:
    int sumOfLeftLeaves(TreeNode* root) {
    
    if(root != NULL) {
    if(root->left != NULL && root->left->left == NULL && root->left->right == NULL) {
        storeSum += root->left->val;
    }    
    sumOfLeftLeaves(root->left); 
    sumOfLeftLeaves(root->right);
    }    
    return storeSum;    
    }
};
