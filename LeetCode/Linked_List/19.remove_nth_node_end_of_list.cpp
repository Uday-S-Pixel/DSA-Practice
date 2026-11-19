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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p;
        int length = 0;
        p = head;
        while(p != nullptr && p -> next != nullptr){
            length ++;
            p = p -> next;
        }
        int pos = length - n;
        int count = 0;

        p = head;
        while(p != nullptr && p -> next != nullptr){
            count ++;
            if(count == pos){
                p -> next = p -> next -> next;
                break;
            }
        }
        return head;
    }
};
