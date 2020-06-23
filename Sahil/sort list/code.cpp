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
    ListNode* sortList(ListNode* head) {
        if(head==NULL)
            return NULL;
        else
        {
            vector<int> p={};
            ListNode *temp=head;
            while(temp!=NULL)
            {
                p.push_back(temp->val);
                temp=temp->next;
            }
            sort(p.begin(),p.end());
            temp=head;
            int k=0;
            while(temp!=NULL)
            {
                temp->val=p[k];
                k++;
                temp=temp->next;
            }
            return head;
        }
    }
};