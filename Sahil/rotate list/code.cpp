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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
            return NULL;
        else{
        vector<int> nums={};
        ListNode *temp=head;
        while(temp!=NULL)
        {
            nums.push_back(temp->val);
            temp=temp->next;
        }
        vector<int> q(nums);
        k=k%nums.size();
        nums.insert(nums.begin(),q.end()-k,q.end());
        nums.erase(nums.end()-k,nums.end());
        
        temp=head;
        for(int i=0;i<nums.size();i++)
        {
            temp->val=nums[i];
            temp=temp->next;
        }
        return head;}
    }
};