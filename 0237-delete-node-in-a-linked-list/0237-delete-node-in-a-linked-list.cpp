/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 * This is the optimal solution.
 * Instead of trying to delete the node, we copy the contents of the next node to this node.
 * Then, we connect this node to next of next node
 * That's it, dumbass question
 * T=O(1)
 */
class Solution {
public:
    void deleteNode(ListNode* node)
    {
        node->val=node->next->val;
        node->next=node->next->next;
    }
        
};