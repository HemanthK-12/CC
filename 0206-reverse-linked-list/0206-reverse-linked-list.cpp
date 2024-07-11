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
 #include<bits/stdc++.h>
class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        return reverseLL(head);
    }
    ListNode* reverseLL(ListNode* head)
    {
        if(head==nullptr || head->next==nullptr)
            return head;
        ListNode* newNode= reverseLL(head->next);
        ListNode* end=head->next;
        end->next=head;
        head->next=nullptr;
        return newNode;
    }
};