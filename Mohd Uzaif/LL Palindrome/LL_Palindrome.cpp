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
    bool isPalindrome(ListNode* head) {
        vector<int> a;
        while(head)
        {
            a.push_back(head->val);
            head=head->next;
        }
        for(int i=0,j=a.size()-1;i<j;i++,j--)
        {
            if(a[i]!=a[j]) return false;
        }
        return true;
    }
};
