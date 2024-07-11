/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * Here we use the tortoise and hare method.
 * A slow pointer moving one step and a fast pointer moving 2 steps.
 * when fast pointer or fast->next pointer reaches null, we stop traversing.then slow will giv the midpoint.
 * We return slow
 * T=O(n/2),S=O(1)
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