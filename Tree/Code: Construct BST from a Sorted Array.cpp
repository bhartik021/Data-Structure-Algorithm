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

BinaryTreeNode<int>* constructTree(int *input, int start, int end) {
    if (start > end) {
        return NULL;
    }

    int mid = (start + end) / 2;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(input[mid]);

    root->left = constructTree(input, start, mid - 1);
    root->right = constructTree(input, mid + 1, end);

    return root;
}

BinaryTreeNode<int>* constructTree(int *input, int n) {
    // Call the helper function with proper start and end indices
    return constructTree(input, 0, n - 1);
}
