/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    // vector<int>data;
    //     for(ListNode* current = head; current != NULL; current = current->next) {
    //         data.push_back(current->val);
    //     }
    //     for(ListNode* current = head; current != NULL; current = current->next) {
    //         current->val = data.back();
    //         data.pop_back();
    //     }
    //     return head;
    //  }
        
    ListNode* prev = NULL;
    ListNode* current = head;
        
    while(current != NULL) {
        ListNode* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
        return prev;
    }
};
