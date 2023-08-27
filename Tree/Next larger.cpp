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

TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    // Write your code here
    TreeNode<int>* nextLarger = nullptr;
    
    if (root->data > x) {
        nextLarger = root;
    }
    
    for (int i = 0; i < root->children.size(); i++) {
        TreeNode<int>* childNextLarger = getNextLargerElement(root->children[i], x);
        if (childNextLarger) {
            if (!nextLarger || childNextLarger->data < nextLarger->data) {
                nextLarger = childNextLarger;
            }
        }
    }
    
    return nextLarger;
}
