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
    ListNode* sortList(ListNode* head) {
        int n = 0;
        ListNode* node = head;
        if(!head) return NULL;

        vector<int> arr;
        
        while(node != NULL) {
            arr.push_back(node->val);
            node = node->next;
        }

        sort(arr.begin(),arr.end());
        int i=0;
        node = head;

        while(node!=NULL){
            node->val = arr[i++];

            node = node->next;
        }

        return head;
    }
};