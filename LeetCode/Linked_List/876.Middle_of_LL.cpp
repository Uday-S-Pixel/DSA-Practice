class Solution { 
public: 
    ListNode* middleNode(ListNode* head) { 

        // slow moves one node at a time
        ListNode* slow; 

        // fast moves two nodes at a time
        ListNode* fast; 
         
        slow = head; 
        fast = head; 
 
        // continue until fast reaches the end of the list
        while(fast != NULL && fast ->next != NULL){ 

            // move slow one node forward
            slow = slow -> next; 

            // move fast two nodes forward
            fast = fast -> next -> next; 
        } 
 
        // slow points to the middle node
        return slow; 
    } 
};
