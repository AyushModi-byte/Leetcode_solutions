/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        if(head->next ==NULL) return false;

        ListNode* node = head;
        while(node->next!=NULL){
            if(node->val == 100001) return true;
            node->val = 100001;
            node = node->next;
        }
        return false;
    }
};