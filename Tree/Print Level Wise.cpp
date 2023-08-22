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

void printLevelWise(TreeNode<int>* root) {
    // Write your code here
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty()) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":" ;

        for(int i = 0; i < front->children.size(); i++) {
            if(i < ((front->children.size()) - 1)) {
                cout << front->children[i]->data << ",";
            }else {
                cout << front->children[i]->data;
            }
            pendingNodes.push(front->children[i]);
        }
        cout << "\n";
    }
}
