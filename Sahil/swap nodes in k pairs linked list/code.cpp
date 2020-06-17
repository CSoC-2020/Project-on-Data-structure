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
        if(head==NULL)
            return NULL;
        else
        {
            ListNode *slow=head;
            ListNode *fast=head->next;
            while(fast!=NULL)
            {
                int temp=fast->val;
                fast->val=slow->val;
                slow->val=temp;
                slow=slow->next->next;
                if(fast->next)
                    fast=fast->next->next;
                else
                    fast=NULL;
            }
            return head;
        }
    }
};