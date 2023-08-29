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
    
    TreeNode* makeBST(vector<int>& v, int low, int high) {
        if(low > high) {
            return{};
        }
        if(low <= high) {
            int mid = low + (high - low) / 2;
            TreeNode* root = new TreeNode(v[mid]);
            
            root->left = makeBST(v, low, mid - 1);
            
            root->right = makeBST(v, mid + 1, high);
            
            return root;
        }
        
        return NULL;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
    int n = nums.size();
        return makeBST(nums, 0, n - 1);
    }
};
