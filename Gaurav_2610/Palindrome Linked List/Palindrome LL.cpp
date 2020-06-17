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
    bool is(ListNode *x,ListNode **y)
    {
        if(x==NULL)return true;
        else
        {
       bool res=is(x->next,y) && ((*y)->val ==x->val);
        *y=(*y)->next;
            return res;
        }
    }
    bool isPalindrome(ListNode* head) {
        
      ListNode *y=head;
        return is(head,&y);
        
    }
};

