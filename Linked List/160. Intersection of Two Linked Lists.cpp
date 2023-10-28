/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {

    private:
    int getLength(ListNode* node) {
        int length = 0;
        while(node) {
            length++;
            node = node->next;
        }
        return length;
    }

    public:

    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int lenA = getLength(headA);
        int lenB = getLength(headB);

        ListNode* currentA = headA;
        ListNode* currentB = headB;

        while(lenA > lenB) {
            currentA = currentA->next;
            lenA--;
        }

        while(lenB > lenA) {
            currentB = currentB->next;
            lenB--;
        }

        while(currentA && currentB) {
            if(currentA == currentB) {
                return currentA;
            }
            currentA = currentA->next;
            currentB = currentB->next;
        }
        return NULL;
    }
};
