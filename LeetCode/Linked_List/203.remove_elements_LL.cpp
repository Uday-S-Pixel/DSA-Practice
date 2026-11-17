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

// Time Complexity - O(n)
// Space Complexity - O(1)
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode p(0,head);
        ListNode* curr = &p;
        while(curr != nullptr && curr -> next != nullptr){
          if(curr -> next -> val == val){
             curr -> next = curr -> next -> next;
          }
          else{
            curr = curr -> next;
          }
        }
        return p.next;
    }
};
