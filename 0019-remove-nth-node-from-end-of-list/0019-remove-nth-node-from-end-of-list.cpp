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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        ListNode* a=head;
        while(n--)
        {
            a=a->next;
        }
        if(a==nullptr)
        {
            return head->next;
        }
        ListNode* b=head;
        while(a->next!=nullptr)
        {
            a=a->next;
            b=b->next;
        }
        b->next=b->next->next;
        return head;

        
    }
};