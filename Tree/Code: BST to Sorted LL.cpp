/**********************************************************

	Following are the Binary Tree Node class structure and the 
	Node class structure

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

	template <typename T>
 	class Node{
    	public:
    	T data;
    	Node<T> *next;
    
    	Node(T data) {
        	this->data = data;
        	this->next = NULL;
    	}
 	};

***********************************************************/

Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
	// Write your code here
	if (root == NULL) {
        return NULL;
    }

    Node<int> *leftHead = constructLinkedList(root->left);
    Node<int> *newNode = new Node<int>(root->data);
    Node<int> *rightHead = constructLinkedList(root->right);

    if (leftHead != NULL) {
        Node<int> *temp = leftHead;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = rightHead;
        return leftHead;
    } else {
        newNode->next = rightHead;
        return newNode;
    }
}
