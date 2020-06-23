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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL)
            return 0;
        else{
        ListNode *ans=head;
        int k=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            k++;
            temp=temp->next;
        }
        k=k/2;
        while(k>0)
        {
            ans=ans->next;
        k--;
        }
        return ans;
    }}