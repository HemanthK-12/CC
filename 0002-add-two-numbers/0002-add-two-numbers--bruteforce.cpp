/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * First keep 2 poiters, one at the start of each ll and add their corresponding values.
 * Als keep traxk of carry variable, whcih will carry over to the next noe.
 * If any of the pointer becomes nullptr first, the other LL is longer and so the final answer LL will attach to this end o the LL
 * we tak care of the end carry and return the new LL.
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* left=l1;
        ListNode* right=l2;
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        int carry=0;
        while(left!=nullptr && right!=nullptr)
        {
            int sum=left->val+right->val+carry;
            ListNode* newNode=new ListNode(sum%10);
            temp->next=newNode;
            if(sum/10 >0)
                carry=sum/10;
            else
                carry=0;
            left=left->next;
            right=right->next;
            temp=temp->next;
        }
        if(left!=nullptr)
        {
            temp->next=left;
            while(left!=nullptr)
            {
                int sum=left->val+carry;
                left->val=sum%10;
                if(sum/10>0)
                    carry=sum/10;
                else
                    carry=0;
                left=left->next;
                temp=temp->next;
            }
            if(carry!=0)
            {
                ListNode* last=new ListNode(carry);
                temp->next=last;
                carry--;
            }
        }
        if(right!=nullptr)
        {
            temp->next=right;
            while(right!=nullptr)
            {
                int sum=right->val+carry;
                right->val=sum%10;
                if(sum/10>0)
                    carry=sum/10;
                else
                    carry=0;
                right=right->next;
                temp=temp->next;
            }
            if(carry!=0)
            {
                ListNode* last=new ListNode(carry);
                temp->next=last;
                carry--;
            }
        }
        if(carry!=0)
            {
                ListNode* last=new ListNode(carry);
                temp->next=last;
            }
        return dummy->next;
    }
};