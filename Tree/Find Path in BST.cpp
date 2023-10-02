/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/

vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
	// Write your code here
	if (root == NULL) {
        return NULL;
    }

    if (root->data == data) {
        vector<int>* path = new vector<int>();
        path->push_back(data);
        return path;
    }

    vector<int>* leftPath = getPath(root->left, data);
    if (leftPath != NULL) {
        leftPath->push_back(root->data);
        return leftPath;
    }

    vector<int>* rightPath = getPath(root->right, data);
    if (rightPath != NULL) {
        rightPath->push_back(root->data);
        return rightPath;
    }

    return NULL;
}
