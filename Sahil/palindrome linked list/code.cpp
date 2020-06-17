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
        if(head==NULL)
        {
            return 1;
        }
        else
        {
            vector<int> nums={};
            ListNode *temp=head;
            while(temp!=NULL)
            {
                nums.push_back(temp->val);
                temp=temp->next;
            }
   
            int k=nums.size()-1;
            for(int i=0;i<nums.size()/2;i++)
            {
                if(nums[i]!=nums[k])
                {
                    return 0;
                }
                k-=1;
            }
    return 1;
        }
        
    }
};