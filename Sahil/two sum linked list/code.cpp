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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     int c=0;
        ListNode *temp=l1;
        ListNode *s=l2;
        ListNode *q=new ListNode();
        ListNode *d=new ListNode();
        q=d;
        
        while(temp!=NULL || s!=NULL)
        {   
            ListNode *p=new ListNode();
            int x=(temp!=NULL)?temp->val:0;
            int y=(s!=NULL)?s->val:0;
            p->val=x + y+ c;
            c=0;
            c=p->val/10;
            p->val=p->val%10;
            d->next=p;
            d=d->next;
            if(temp!=NULL)
            temp=temp->next;
            if(s!=NULL)
            s=s->next;
        }
        if(c>0)
        {
            ListNode *p=new ListNode();
            p->val=c;
            d->next=p;
        }
        return q->next;
    }
};