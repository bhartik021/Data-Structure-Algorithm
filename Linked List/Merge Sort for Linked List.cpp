//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
  
  Node* Mid(Node *head) {
      Node* slow = head;
      Node* fast = head;
      
      while(fast->next != NULL && fast->next->next != NULL) {
          slow = slow->next;
          fast = fast->next->next;
      }
      return slow;
  }
  
  Node* mergeSortedList(Node* p1, Node* p2) {
      if(p1 == NULL || p2 == NULL) {
          return (p1 == NULL) ? p2 : p1;
      }
      
      Node* ans = new Node(0);
      Node* current = ans;
      
      while(p1 != NULL && p2 != NULL) {
          if(p1->data < p2->data) {
              current->next = p1;
              p1 = p1->next;
          }
          else {
              current->next = p2;
              p2 = p2->next;
          }
          current = current->next;
      }
      
      if(p1 != NULL || p2 != NULL) {
          current->next = (p1 != NULL) ? p1 : p2;
      }
      
      return ans->next;
      
  }
  
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        if(head == NULL || head->next == NULL) return head;
        
        Node* mid = Mid(head);
        Node* newHead = mid->next;
        mid->next = NULL;
        
        Node* leftHalf = mergeSort(head);
        Node* rightHalf = mergeSort(newHead);
        
        return mergeSortedList(leftHalf, rightHalf);
    }
};


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends
