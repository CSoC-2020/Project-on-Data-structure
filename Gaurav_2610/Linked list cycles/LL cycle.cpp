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
    
    bool hasCycle(ListNode *head) {
        
        if(!head|| !(head->next)) return 0;
        ListNode *fast = head , *slow = head;
        //fast return the pointer 2 times 
        //slow returns the pointers 1 times
        //Floyd Cycle detection Algorithm
        
        while(fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow)
                return 1;
        }
        
        return 0;
    }
};
