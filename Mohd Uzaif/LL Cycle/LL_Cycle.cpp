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
        if(!head || !head->next)   return false;
            ListNode *q,*p;
            q=p=head;
            do{
                p=p->next;
                q=q->next;
                q=q?q->next:NULL;
            }while(p && q && p!=q);
                if(p==q)    return true;
            else return false;
    }
};
