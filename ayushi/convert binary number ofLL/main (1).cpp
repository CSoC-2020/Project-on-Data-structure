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
class Solution 
{
public:
    int getDecimalValue(ListNode* head)
    {
    
        ListNode* temp = head;
        int len = 0;
        while(temp)
        {
            temp=temp->next;
            len++;
        }
        int i = len-1;
        temp = head;
        long long ans = 0;
        while(temp)
        {
            ans += (temp->val * pow(2,i));
            temp = temp->next;
            i--;
        }
        return ans;
    
    }
};