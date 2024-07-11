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
    ListNode* middleNode(ListNode* head)
    {
        ListNode* current=head;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* temp=nullptr;
        
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            temp=fast->next;
            fast=temp->next;
        }
        return slow;
    }
};