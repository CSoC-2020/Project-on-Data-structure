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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
            return head;
        else
        {
            ListNode *temp=new ListNode();
            ListNode *temp1=new ListNode();
            temp=head;temp1=head;
            while(n>0)
            {
                temp=temp->next;
                n-=1;
            }
            if(temp==NULL)
                return head->next;
            else
            {
                while(temp->next!=NULL)
                {
                    temp1=temp1->next;
                    temp=temp->next;
                }
                temp1->next=temp1->next->next;
                return head;
            }
        }
    }
};