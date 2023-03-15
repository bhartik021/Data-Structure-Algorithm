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
    bool isCompleteTree(TreeNode* root) {
      if(root == NULL) return 1;
        
        queue<TreeNode*>q;
        bool okay = 0;
        q.push(root);
        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if(temp -> left) {
                if(okay == true) {
                    return false;
                }
                q.push(temp->left);
            }
            else okay = 1;
        if(temp -> right) {
            if(okay == true) {
                return false;
            }
            q.push(temp->right);
        }
        else okay = 1;
     }
        return true;
    }
};
