edfe/**
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
        if(n<0) return NULL;
        int count=1;
        ListNode * p=head,*q=NULL;
        while(p->next)
        {
            count++;
            p=p->next;
        }
        if(n>count) return NULL;
        p=head;
        for(int i=0;i<count-n;i++)
        {
            q=p;
            p=p->next;
        }
        if(p==head)
        {
            head=p->next;
            delete p;
            p=q=NULL;
            return head;
        }
        q->next=p->next;
        delete p;
        p=NULL;
        return head;
    }
};
