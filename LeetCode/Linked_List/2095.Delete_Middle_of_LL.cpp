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
class Solution { 
public: 
    ListNode* deleteMiddle(ListNode* head) { 

        // fast moves two nodes at a time
        ListNode* fast; 

        // slow moves one node at a time
        ListNode* slow; 

        // p is used to reach the node before the middle node
        ListNode* p; 
 
        fast = head; 
        slow = head; 
        p = head; 
        int count = 0; 
 
        // if there is only one node, delete it by returning NULL
        if(head -> next == NULL){ 
            return NULL; 
        } 
 
        // find the middle node using slow and fast pointers
        while(fast != NULL && fast -> next != NULL){ 
            slow = slow -> next; 
            fast = fast -> next -> next; 
            count++; 
        } 
 
        int i = 0; 

        // move p to the node before the middle node
        while(i != count - 1){ 
          p = p-> next; 
          i ++; 
        } 
 
        // connect the previous node to the node after the middle
        p -> next = slow -> next; 

        // disconnect the middle node
        slow -> next = NULL; 
 
        // delete the middle node
        delete slow; 
 
        return head; 
    } 
};
