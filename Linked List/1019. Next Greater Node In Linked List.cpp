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
    vector<int> nextLargerNodes(ListNode* head) {
      vector<int>ans;
        while(head != NULL) {
            ListNode* current = head->next;
            int nextGreater = 0;
            
            while(current != NULL) {
                if(current->val > head->val) {
                    nextGreater = current->val;
                    break;
                }
                current = current->next;
            }
            ans.push_back(nextGreater);
            head = head->next;
        }
        return ans;
    }
};
