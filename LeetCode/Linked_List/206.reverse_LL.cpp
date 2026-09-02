class Solution { 
public: 
    ListNode* reverseList(ListNode* head) { 

        // Taking three pointers to reverse the links
        ListNode* prev = nullptr; 
        ListNode* current = head; 
 
        // Traverse the linked list
        while(current != nullptr){ 

            // Store the next node before changing the link
            ListNode* next = current -> next; 

            // Reverse the current node's link
            current -> next = prev; 
 
            // Move prev and current one step forward
            prev = current; 
            current = next; 
        } 

        // Prev becomes the new head
        return prev; 
    } 
};
