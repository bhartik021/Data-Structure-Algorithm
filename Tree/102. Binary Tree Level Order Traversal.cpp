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
    vector<vector<int>> levelOrder(TreeNode* root) {
     vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        if(root == NULL) {
            return ans;
        }
        while(!q.empty()){
            int size = q.size();
            vector<int>level;
            for(int i = 0; i < size; i++) {
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left != NULL) {
                q.push(temp->left);
            }
            if(temp->right != NULL) {
                q.push(temp->right);
            }
            level.push_back(temp->val); 
        }
            ans.push_back(level);
        }
        return ans;
    }
};
