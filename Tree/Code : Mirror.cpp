/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/

void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    // Write your code here
	if(root == NULL || (root->left == NULL && root->right == NULL)) {
		return;
	}

	swap(root->left, root->right);

	mirrorBinaryTree(root->left);
	mirrorBinaryTree(root->right);
}
