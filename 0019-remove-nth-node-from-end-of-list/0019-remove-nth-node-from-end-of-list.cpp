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