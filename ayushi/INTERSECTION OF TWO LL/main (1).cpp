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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        
  if (headA == NULL || headB == NULL)
  
 {
    return NULL;
  }

  ListNode* pointer1 = headA;
  ListNode* pointer2 = headB;

  while (pointer1 != pointer2)
  {    
    pointer1 = pointer1->next;
    pointer2 = pointer2->next;

    if (pointer1 == pointer2) 
    {
      return pointer1;
    }
    
    if (pointer1 == NULL)
    {
      pointer1 = headB;
    }

    if (pointer2 == NULL)
    {
      pointer2 = headA;
    }
  }
    
  return pointer1;
    }
};
    