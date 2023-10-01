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

void inOrder(TreeNode* root, vector<int> &vec) {
    if(root == NULL) {
        return;
    }
    inOrder(root->left, vec);
    vec.push_back(root->val);
    inOrder(root->right, vec);
}
public:
    bool isValidBST(TreeNode* root) {
       vector<int>v;
       inOrder(root, v);
       for(int i = 1; i < v.size(); i++) {
           if(v[i] <= v[i - 1]) {
               return false;
           }
       } 
       return true;
    }
};
