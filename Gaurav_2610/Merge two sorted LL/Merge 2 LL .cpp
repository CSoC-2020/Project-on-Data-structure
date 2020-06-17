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
     
        
        if(l1==NULL && l2==NULL)return NULL;
        else if(l1==NULL)return l2;
        else if(l2==NULL)return l1;
        
         
    if(l1->val <= l2->val)
        l1->next = mergeTwoLists(l1->next, l2);
    else {
        ListNode *temp = l2;
        l2 = l2->next;
        temp->next = l1;
        l1 = temp;
        l1->next = mergeTwoLists(l1->next, l2);
    }
    return l1;
    }
};
