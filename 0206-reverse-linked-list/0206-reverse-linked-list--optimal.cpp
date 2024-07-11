/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * Here we temporarily allocate 3 pointers pointing to consecutive positions : prev,present and after.
 * we initially take prev=head,present=head-->next and after=null(since it'll enter the loop and to satisfy 1st case).
 * This continues for every 3 elements whhere it'll reverse the arrows and carry itself to the next element.
 * We then return the head,i.e. present for this new linkedlist
 * T=O(n),S=O(1)..
 */
 #include<bits/stdc++.h>
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if (head == nullptr) return nullptr;
        ListNode* prev=head;
        ListNode* present=head->next;
        ListNode* after=nullptr;

        head->next=nullptr;
        while(present!=nullptr)
        {
            after=present->next;
            present->next=prev;
            prev=present;
            present=after;
        }
        // head->next=nullptr;
        return prev;

        
    }
};