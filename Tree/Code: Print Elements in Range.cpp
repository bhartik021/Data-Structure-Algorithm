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

void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
	// Write your code here
	if (root == NULL) {
        return;
    }

    // Check if the current node's data is within the range [k1, k2]
    if (root->data >= k1 && root->data <= k2) {
        elementsInRangeK1K2(root->left, k1, k2); // Recursively process left subtree
        cout << root->data << " "; // Print the current node's data
        elementsInRangeK1K2(root->right, k1, k2); // Recursively process right subtree
    } else if (root->data < k1) {
        // If the current node's data is less than k1, search only in the right subtree
        elementsInRangeK1K2(root->right, k1, k2);
    } else {
        // If the current node's data is greater than k2, search only in the left subtree
        elementsInRangeK1K2(root->left, k1, k2);
    }
}
