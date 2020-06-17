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
    ListNode *detectCycle(ListNode *head) {
       if(head==NULL)
           return head;
        else
        {int t=0;
            ListNode *slow=head;
            ListNode *fast=head;
            while(fast!=NULL && fast->next!=NULL)
            {
                slow=slow->next;
                fast=fast->next->next;
                if(slow==fast)
                {t=1;
                break;}
            }
         if(t==1)
         {
             ListNode *temp=head;
             while(temp!=slow)
             {
                 temp=temp->next;
                 slow=slow->next;
             }
             return temp;
         }
         return NULL;
        }
    }
};