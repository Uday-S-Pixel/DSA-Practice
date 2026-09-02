class Solution { 
public: 
    ListNode *detectCycle(ListNode *head) { 

        // If the list is empty or has only one node, no cycle is possible
         if(head == nullptr || head -> next == nullptr){ 
          return nullptr; 
        } 

        // Taking two pointers slow and fast
        ListNode* fast =  head; 
        ListNode* slow = head; 

        // Traverse using slow and fast pointers
        while(fast != nullptr && fast -> next != nullptr){ 

            // Slow moves one step
            slow = slow -> next; 

            // Fast moves two steps
            fast = fast -> next -> next; 

            // If both pointers meet, a cycle is present
            if(slow == fast){ 
                 
                // Move slow back to the head
                slow = head; 
 
                // Move both pointers one step at a time
                while(slow != fast){ 
                    slow = slow -> next; 
                    fast = fast -> next; 
                } 

                // The meeting point is the starting point of the cycle
                return slow; 
            } 
        } 

        // No cycle is present
        return nullptr; 
    } 
};
