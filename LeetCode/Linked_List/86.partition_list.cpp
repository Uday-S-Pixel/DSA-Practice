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
    ListNode* partition(ListNode* head, int x) {
        ListNode d1(0);
        ListNode d2(0);
        ListNode* d1ptr = &d1;
        ListNode* d2ptr = &d2;
        ListNode* curr = head;
        while(curr != nullptr){
            if(curr -> val < x){
                d1ptr -> next = curr;
                d1ptr = d1ptr -> next;
            }
            else{
                d2ptr -> next = curr;
                d2ptr = d2ptr -> next;
            }
            curr = curr -> next;
        }
        d2ptr -> next = nullptr;
        d1ptr -> next = d2.next;
        return d1.next;
    }
};
