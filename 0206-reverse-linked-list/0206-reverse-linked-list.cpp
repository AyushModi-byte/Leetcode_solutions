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
        ListNode* n = head;
        ListNode* p = head;
        if(head == NULL) return head;
        int length = 0;
        while(n->next!=NULL){
            p = n;
            length++;
            n = n->next;

        }
        ListNode* head2 = n;
        if(length==0) return head;

        for(int i=0;i<length;i++){
            n->next = p;
            p->next = NULL;
            n = head;
            while(n->next!=NULL){
            p = n;
            
            n = n->next;

        }
        }
        return head2;
    }
};