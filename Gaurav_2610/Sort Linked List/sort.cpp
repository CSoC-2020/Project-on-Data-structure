/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
 It cana be solved using mergesort which is faster than quicksort .
 
 
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
      
  return mergesort(head);
            
    }
ListNode *mergesort(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
            
        ListNode *head2 = NULL, *slow = head, *fast = head;
        
        while (fast)
        {
            if (fast->next == NULL || fast->next->next == NULL)
                break;
            fast = fast->next->next;
            slow = slow->next;
        }
        head2 = slow->next;
        slow->next = NULL;
        
        head = mergesort(head);
        head2 = mergesort(head2);
        
        head = merge(head, head2);
        
        return head;
    }
    
    ListNode *merge(ListNode *head1, ListNode *head2)
    {
        if (head2 == NULL)
            return head1;
            
        ListNode *mergeHead = NULL, *cur = NULL;
        if (head1->val <= head2->val)
        {
            mergeHead = head1;
            head1 = head1->next;
        }
        else
        {
            mergeHead = head2;
            head2 = head2->next;
        }
        
        cur = mergeHead;
        while (head1 && head2)
        {
            if (head1->val <= head2->val)
            {
                cur->next = head1;
                head1 = head1->next;
            }
            else
            {
                cur->next = head2;
                head2 = head2->next;
            }
            
            cur = cur->next;
        }
        if (head1)
            cur->next = head1;
        else
            cur->next = head2;
            
        return mergeHead;
    }
};
