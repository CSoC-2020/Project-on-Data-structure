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
    ListNode* swapPairs(ListNode* head) {
        ListNode * last=NULL,*t=NULL,*q=NULL;
         if(!head || !head->next)
            return head;
        ListNode *p = head, *prev = NULL, *new_head = NULL;
        while(p) {
            if(!p->next) {
                prev->next = p;
                break;
            }
            ListNode *q = p->next;
            ListNode *next = q->next;
            q->next = p;
            p->next = NULL;
            if(prev) 
                prev->next = q;
            else 
                new_head = q;
            prev = p;
            p = next;
        }
        return new_head;
    }
};