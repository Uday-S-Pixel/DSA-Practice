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
    int getDecimalValue(ListNode* head) {
        ListNode* p = head;
        int count = 0;
        while(p -> next != nullptr && p != nullptr){
            count ++;
            p = p -> next;
        }

        p = head;
        int sum = 0; 
        while(count >= 0){
            sum = sum + (pow(2,count) * p -> val);
            p = p -> next;
            count --;
        }
        return sum;
    }
};
