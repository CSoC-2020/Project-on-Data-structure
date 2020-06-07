class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        
    if (!head) {
      return NULL;
    }

    ListNode* newhead = NULL;
    ListNode* next = NULL;
    while (head) {
      next = head->next;
      head->next = newhead;
      newhead = head;
      head = next;
    }
    return newhead;
  }
        
    
};