/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * We count the number of nodes in total.
 * We then shift the head of the LL to half of the total number of nodes
 * we then return the head
 * T=O(n+n/2),S=O(1)
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head)
    {
        ListNode* current=head;
        int c=0;
        while(current!=nullptr)
        {
            cout<<current->val<<" ";;
            current=current->next;
            c++;
        }
        current=head;
        cout<<c<<endl;
        for(int i=0;i<c/2;i++)
        {
            head=head->next;
        }
        return head;
        
    }
};