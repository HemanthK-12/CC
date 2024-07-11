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
/**
 * Here, we traverse through the linkedllist and store the values one by one in a stack.
 * Since stack is LIFO, while popping, we keep  each popped value to the linkedlist's  value.
 * We then return the head of linked list.
 * T=(O(2n), S=O(n)
*/
 #include<bits/stdc++.h>
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int> reverse;
        ListNode* current=head;
        while(current!=nullptr)
        {
            reverse.push(current->val);
            current=current->next;            
        }
        current=head;
        while(current!=nullptr)
        {
            current->val=reverse.top();
            current=current->next;
            reverse.pop();
        }
        return head;
        
    }
};