/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    if(root == NULL) {
        return false;
    }

    if(root->data == x) {
        return true;
    }

    bool leftPresent = isNodePresent(root->left,  x);
    bool rightPresent = isNodePresent(root->right,  x);

    return leftPresent || rightPresent;
}
