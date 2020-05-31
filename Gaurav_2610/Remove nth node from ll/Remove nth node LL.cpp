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
        
       if(head==NULL) return NULL;
        
        ListNode * ff=head;
        ListNode *bb=head;
        while(n--)
        {
            ff=ff->next;
        }
        if(ff==NULL)return head->next;
        while(ff->next!=NULL)
        {
            ff=ff->next;
            bb=bb->next;
        }
        bb->next=bb->next->next;
        return head;
    }
};


