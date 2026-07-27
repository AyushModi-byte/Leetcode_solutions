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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 1;

        ListNode* node =head;
        if(!head) return NULL;
        if(!head->next) return NULL;
        while(node->next!=NULL){
            node = node->next;
            len++;
        }
        if(len==n) return head->next;
        int target =0;
        node = head;
        while(target<len-n-1){
            node = node->next;
            target++;
        }
        node->next = node->next->next;

        return head;


    }
};