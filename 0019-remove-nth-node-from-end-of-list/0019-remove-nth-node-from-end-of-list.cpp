/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * First traverse through the linked list and get length of linked list.
 * Then take two pointers(1 & 2), one after another, and move lengt-n times.
 * Now, 2 will point to the nthFromEnd node and 1 will point to it's previous node.Connect 1 to 2->next and return head.
 * When n==length, return head->next instead of head.
 */
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* current=head;
        int c=0;
        if(current==nullptr || current->next==nullptr)
            return nullptr;
        while(current!=nullptr)
        {
            c++;
            current=current->next;
        }
        if(c==2)
        {
            if(n==1)
            {
                head->next=nullptr;
                return head;
            }
            if(n==2)
                return head->next;
        }
        int k=c-n+1;
        current=head;
        ListNode* prev=head;
        current=head->next;
        for(int i=0;i<k-2;i++)
        {
            prev=prev->next;
            current=current->next;
        }
        prev->next=current->next;
        return head;
    }
};