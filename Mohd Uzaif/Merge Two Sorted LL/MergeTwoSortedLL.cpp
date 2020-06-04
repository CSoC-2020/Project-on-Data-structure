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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)    return l2;
        if(l2==NULL)    return l1;
        ListNode *p,*head; 
        if(l1->val<l2->val)
        {
            p=head=l1;
            l1=l1->next;
            p->next=NULL;
    
        }
        else
        {
            p=head=l2;
            l2=l2->next;
            p->next=NULL;
    
        }
        while(l1 && l2)
        {
            if(l1->val<l2->val)
            {
                p->next=l1;
                p=p->next;
                l1=l1->next;
                p->next=NULL;

            }
            else
            {
                p->next=l2;
                p=p->next;
                l2=l2->next;
                p->next=NULL;
    
            }   
        }
        while(l1)
        {
            p->next=l1;
                p=p->next;
                l1=l1->next;
                p->next=NULL;
        }
        while(l2)
        {
            p->next=l2;
                p=p->next;
                l2=l2->next;
                p->next=NULL;

        }
        return head;
    }
};
