/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        // Copy the value of the next node into the current node.

        node->next = node->next->next;
        // Make the current node point to the node after the next node,
        // effectively skipping the next node.
    }
};
