/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * We take care of the base cases of 0, 1 node(no need to change,so return head) and  2 nodes(shift and reverse nodes and return ending element)
 * We then recursively pass n nodes LL and finally return the last element as head.
 * T=O(n),S=O(1)
 */
 #include<bits/stdc++.h>
class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        return reverseLL(head);        
    }
    ListNode*  reverseLL(ListNode* head)
    {
        if(head==nullptr || head->next==nullptr)
            return head;
        ListNode* newHead=reverseLL(head->next);
        ListNode* end=head->next;
        end->next=head;
        head->next=nullptr;
        return newHead;
    }
};