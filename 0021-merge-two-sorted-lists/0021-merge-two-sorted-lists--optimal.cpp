/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * Here,we are using 2 pointer approach, each at the list's head.
 * We compare the first elements of the list and make the next element of the final list, the smalller elementt.
 * We keep on doing this until any one of the heads becoem null.We then set the next of the tail of the final list equal to the otheer head.
 * This saves on time by using sorted property and on space by saving into the linked lists itself.
 * T=O(n1+n2),S=O(1)
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        ListNode* t1=list1;
        ListNode* t2=list2;
        ListNode* dNode=new ListNode(-1);
        ListNode* temp=dNode;
        while(t1!=nullptr && t2!=nullptr)
        {
            if(t1->val<t2->val)
            {
                temp->next=t1;
                temp=t1;
                t1=t1->next;
            }
            else
            {
                temp->next=t2;
                temp=t2;
                t2=t2->next;
            }
        }
        if(t1)
            temp->next=t1;
        else
            temp->next=t2;
        return dNode->next;
    }
};