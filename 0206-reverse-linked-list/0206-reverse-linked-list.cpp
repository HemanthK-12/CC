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
    ListNode* reverseList(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if (head == nullptr) return nullptr;
        ListNode* current=head;
        ListNode* after=head->next;
        ListNode* also=nullptr;


        head->next=nullptr;
        while(after!=nullptr)
        {
            also=after->next;
            after->next=current;
            current=after;
            after=also;
        }
        // head->next=nullptr;
        return current;

        
    }
};