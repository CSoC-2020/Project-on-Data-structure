class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        if(!l1)
            return l2;
        
        if(!l2)
            return l1;
        
        if(!l1 && !l2)
            return NULL;
        
        ListNode* s;
        
        if(l1->val < l2->val)
        {
            s = l1;
            l1 = l1->next;
        }
        
        else
        {
            s = l2;
            l2 = l2->next;
        }
        
        ListNode* head = s; 
        
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<l2->val)
            {
                s->next = l1;
                s=l1;
                l1 = l1->next;
            }
            else
            {
                s->next = l2;
                s=l2;
                l2 = l2->next;
            }
        }
        
        if(l2==NULL)
            s->next = l1;
        
        if(l1==NULL)
            s->next = l2;
            
        return head;
    }
};