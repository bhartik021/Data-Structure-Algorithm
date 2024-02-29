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
    bool isEvenOddTree(TreeNode* root) {
        if (!root) {
            return true;
        }

        std::queue<TreeNode*> queue;
        int level = 0;

        queue.push(root);

        while (!queue.empty()) {
            int size = queue.size();
            int prev_val = (level % 2 == 0) ? std::numeric_limits<int>::min() : std::numeric_limits<int>::max();

            for (int i = 0; i < size; ++i) {
                TreeNode* node = queue.front();
                queue.pop();

                // Check if the values follow the conditions
                if ((level % 2 == 0 && (node->val % 2 == 0 || node->val <= prev_val)) ||
                    (level % 2 == 1 && (node->val % 2 == 1 || node->val >= prev_val))) {
                    return false;
                }

                prev_val = node->val;

                // Add children to the queue
                if (node->left) {
                    queue.push(node->left);
                }
                if (node->right) {
                    queue.push(node->right);
                }
            }

            level++;
        }

        return true;
    }
};
