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
    ListNode* deleteMiddle(ListNode* head) {
        int n = 0;
        ListNode* node = head;
        while(node->next != NULL){
            n++;
            node = node->next;
        }
        if(!head || !head->next) return NULL;

        n++;
        n = n/2;

        node = head;
        ListNode* prev = head;

        for(int i=0;i<n;i++){
            prev = node;
            node = node->next;
        }

        prev->next = node->next;

        return head;
    }
};