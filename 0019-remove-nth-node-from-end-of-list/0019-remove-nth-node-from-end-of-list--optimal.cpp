/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * fIRST TAKE A POINTER AND MOVE IT N SPACES from head.
 * Then tae another pointer and move this and the first ptr simultaneoulsy till the 1st rreaches null.by then, the 2nd will reach the nthFromEnd node.
 * Delete the node and return head.If 1st==nullptr after traversing ,return head->next.
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
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