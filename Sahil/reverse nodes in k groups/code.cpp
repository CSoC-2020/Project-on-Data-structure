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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=new ListNode();
        temp=head;
        int t=0;
        vector<int> nums={};
        while(temp!=NULL)
        {t+=1;
            nums.push_back(temp->val);
         temp=temp->next;
        }
        t=t/k;
        int n=0;
        while(t>0)
        {
            reverse(nums.begin()+n*k,nums.begin()+(n*k+k));
            n+=1;
            t-=1;
        }
        temp=head;
        n=0;
        while(temp!=NULL)
        {
            temp->val=nums[n];
            n+=1;
            temp=temp->next;
        }
        return head;
    }
};