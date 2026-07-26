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
    ListNode* middleNode(ListNode* head) {
        int n = 0;
        ListNode* node = head;
        while(node->next!=NULL){
            n++;
            node = node->next;
        }
        if(n==0) return head;
        else if(n==1) return head->next;
        node = head;
        if(n%2==0) n = n/2  ;
        else n = (n+1)/2;
        

        for(int i=0;i<n;i++){
            node = node->next;
            
        }
        return node;
    }
};