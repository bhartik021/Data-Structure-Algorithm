/************************************************************

    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;

        TreeNode(T data) {
            this->data = data;
        }

        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here
     if (root == nullptr) {
        return nullptr;
    }

    TreeNode<int>* maxNode = root;
    int maxSum = root->data;

    for (int i = 0; i < root->children.size(); i++) {
        maxSum += root->children[i]->data;
    }

    for (int i = 0; i < root->children.size(); i++) {
        TreeNode<int>* childMax = maxSumNode(root->children[i]);
        int childSum = childMax->data;

        for (int j = 0; j < childMax->children.size(); j++) {
            childSum += childMax->children[j]->data;
        }

        if (childSum > maxSum) {
            maxSum = childSum;
            maxNode = childMax;
        }
    }

    return maxNode;
}
