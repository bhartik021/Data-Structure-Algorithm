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

bool isPresent(TreeNode<int>* root, int x) {
    // Write your code here
    if(root == NULL) {
        return false;
    }
    if(root->data == x) {
        return true;
    }
    for(int i = 0; i < root->children.size(); i++) {
        if(isPresent(root->children[i] , x)) 
        return true;
    }
    return false;
}
