class Solution {
 public:
  ListNode* getMiddleNode(ListNode* head) {
    if (!head) {
      return NULL;
    }

    ListNode* slow = head;
    ListNode* fast = head;
    while (slow->next && fast->next) {
      slow = slow->next;
      fast = fast->next;
      if (!fast->next) {
        return slow;
      }
      fast = fast->next;
    }
    return slow;
  }


  ListNode* getReverseList(ListNode* head) {
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


  bool isPalindrome(ListNode* head) {
    if (!head || !head->next) {
      return true;
    }
    ListNode* midnode = getMiddleNode(head);
    ListNode* newhead = getReverseList(midnode);
    while (newhead && head) {
      if (newhead->val != head->val) {
        return false;
      }
      newhead = newhead->next;
      head = head->next;
    }
    return true;
  }
};
