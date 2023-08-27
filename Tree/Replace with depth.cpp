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

void replaceWithDepthValue(TreeNode<int>* root) {
    // Write your code here
    if (root == nullptr) {
        return;
    }

    queue<TreeNode<int>*> q;
    q.push(root);
    root->data = 0; // Depth of the root node is 0

    while (!q.empty()) {
        TreeNode<int>* current = q.front();
        q.pop();

        for (int i = 0; i < current->children.size(); i++) {
            TreeNode<int>* child = current->children[i];
            child->data = current->data + 1; // Depth of the child node
            q.push(child);
        }
    }
}
