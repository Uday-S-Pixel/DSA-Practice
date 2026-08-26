#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node* next; 
};
// head is declared globally so that its value
// persists between calls to insert_head().
struct Node* head = NULL;

void insert_head(){
    struct Node* temp;
    // allocating memory for the entire node

    temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data: ");
    scanf("%d",&temp->data);

    // if the LL is empty then the element ur entering is the first element
    if(head == NULL){
      temp->next = NULL;
      head = temp;// head pointed to the first node
    }
    else{
     // If elements already exist,
     // head points to the current first node.
     // Make temp point to the current first node.
     // Then make temp the new first node.

     temp->next = head;
     head = temp;
    }
  }
int main(){
  insert_head();
  insert_head();
  
  return 0;
}
