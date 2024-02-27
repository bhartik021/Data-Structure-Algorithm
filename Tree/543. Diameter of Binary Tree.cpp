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
int ans = 0;
int dfs(TreeNode* root) {
    if(root == NULL) {
        return 0;
    } 

    int leftdfs = dfs(root->left);
    int rightdfs = dfs(root->right);

    ans = max(ans, leftdfs + rightdfs);

    return 1 + max(leftdfs, rightdfs);
}
    int diameterOfBinaryTree(TreeNode* root) {   
    dfs(root);
    return ans;
    }
};
