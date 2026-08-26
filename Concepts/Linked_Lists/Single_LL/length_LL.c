#include <stdio.h>
#include <stdlib.h>

struct Node{

  int data;
  struct Node* next;

};

struct Node* head = NULL;

void insert_head();
int length();

int main(){

  insert_head();
  insert_head();
  insert_head();
  insert_head();
  insert_head();

  printf("The length of the linked list is:%d",length());

  return 0;
}

void insert_head(){

    struct Node* temp;

    temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data: ");
    scanf("%d",&temp->data);

    if(head == NULL){
      temp->next = NULL;
      head = temp;
    }

    else{
     temp->next = head;
     head = temp;
    }

}

int length(){

  // Pointer p is used to traverse through the linked list.
  struct Node *p;

  // count keeps track of the number of nodes in the linked list.
  int count = 0;

  // Start traversing from the first node.
  p = head;

  // Continue until p reaches NULL,
  // which indicates the end of the linked list.
  while(p != NULL){

    // Move p to the next node.
    p = p->next;

    // Count the current node.
    count ++;

  }

  // Return the total number of nodes.
  return count;

}
