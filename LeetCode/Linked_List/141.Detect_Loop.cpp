class Solution {
public:
    bool hasCycle(ListNode *head) {

        // Taking two pointers slow and fast
        ListNode* slow = head;
        ListNode* fast = head;

        // Traverse while fast and fast->next are not NULL
        while(fast != nullptr && fast->next != nullptr){

            // Slow moves one step
            slow = slow->next;

            // Fast moves two steps
            fast = fast->next->next;

            // If both pointers meet, a cycle is present
            if(slow == fast){
                return true;
            }
        }

        // If fast reaches NULL, there is no cycle
        return false;
    }
};
