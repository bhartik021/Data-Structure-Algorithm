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

bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    // Write your code here
    if (root1 == nullptr && root2 == nullptr) {
        return true; // Both trees are empty
    }

    if (root1 == nullptr || root2 == nullptr) {
        return false; // One tree is empty while the other is not
    }

    if (root1->data != root2->data) {
        return false; // Data at the current nodes is different
    }

    if (root1->children.size() != root2->children.size()) {
        return false; // Number of children is different
    }

    // Recursively check each child
    for (int i = 0; i < root1->children.size(); i++) {
        if (!areIdentical(root1->children[i], root2->children[i])) {
            return false; // At least one pair of children is not structurally identical
        }
    }

    return true;
}
