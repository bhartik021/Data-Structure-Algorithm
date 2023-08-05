#include<bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };
        

*****************************************************************/

Node* reverseLinkedList(Node *head)
{
    // Write your code here
    vector<int>data;
    for(Node* current = head; current != NULL; current = current->next) {
        data.push_back(current->data);
    }
    for(Node* current = head; current != NULL; current = current->next) {
        current->data = data.back();
            data.pop_back();
    }
    return head;
}
