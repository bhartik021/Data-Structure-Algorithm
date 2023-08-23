#include<bits/stdc++.h>
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

int sumOfNodes(TreeNode<int>* root) {
    // Write your code here
    int sum = root->data;
    for(int i = 0; i < root->children.size(); i++) {
        sum += sumOfNodes(root->children[i]);
    }
    return sum;
}
