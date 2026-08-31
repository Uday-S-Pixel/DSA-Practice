#include <iostream> 
#include <cstdlib> 
using namespace std; 
 
class Node{ 
  public: 
  int data; 
  Node* next; 
}; 

// head represents the top of the stack
Node* head = NULL; 
 
void top(); 
void pop(); 
void push(); 
bool isempty(); 
 
int main(){ 
  cout << "#### STACK IMPLEMENTATION LINKED LISTS ####"; 
  while(1){ 
    cout << "\n1.TOP" << "\n2.POP" << "\n3.PUSH" << "\n4.ISEMPTY" << "\n5.EXIT"; 
    int ch; 
    cout << "\nEnter choice: "; 
    cin >> ch; 
     
    switch(ch){ 
      case 1:{ 
        top(); 
        break; 
      } 
      case 2:{ 
        pop(); 
        break; 
      } 
      case 3:{ 
        push(); 
        break; 
      } 
      case 4:{ 
        if(isempty()){ 
          cout << "STACK IS EMPTY"; 
        } 
        else{ 
          cout << "STACK IS NOT EMPTY"; 
        } 
        break; 
      } 
      case 5:{ 
        exit(1); 
      } 
      default: 
       cout << "INVALID CHOICE"; 
    } 
  } 
  cout << "\n"; 
} 
 
void top(){ 
  // check if the stack is empty
  if(isempty()){ 
    cout << "STACK UNDERFLOW"; 
  } 
  else{ 
    // head points to the top element
    cout << head -> data; 
  } 
} 
 
void pop(){ 
  // check if the stack is empty
  if(isempty()){ 
    cout << "STACK UNDERFLOW"; 
  } 
  else{ 
    Node* p; 
    p = head; 

    // move head to the next node
    head = p -> next; 

    // remove the previous top node
    p -> next = NULL; 
    delete p; 
  } 
} 
 
void push(){ 
  // create a new node
  Node* temp = new Node(); 
  cout << "Enter value: "; 
  cin >> temp -> data; 
  temp -> next = NULL; 

  // if stack is empty, make the new node the top
  if(head == NULL){ 
    head = temp; 
  } 
  else{ 
    // make the new node point to the current top
    temp -> next = head; 

    // make the new node the new top
    head = temp; 
  } 
} 
 
bool isempty(){ 
  // if head is NULL, the stack is empty
  if (head == NULL){ 
    return true; 
  } 
  else{ 
    return false; 
  } 
}
