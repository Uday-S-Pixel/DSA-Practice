/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Time Complexity - O(n + m)
// Space Complexity - O(1)

// Needed some help to actually get the solution
// Quite the logical one
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p = headA;
        ListNode* q = headB;

        while(p != q){
            if(p == nullptr){
                p = headB;
            }
            else{
                p = p -> next;
            }

            if(q == nullptr){
                q = headA;
            }
            else{
                q = q -> next;
            }
        }
        return p;
    }
};
