#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node* next; 
};

struct Node* head = NULL;

void insert_head();
void search(int key);

int main(){
  insert_head();
  insert_head();
  insert_head();
  insert_head();
  insert_head();

  search(20);
  search(30);

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

void search(int key){

  // Pointer p is used to traverse through the linked list.
  struct Node *p;

  // Start traversing from the first node.
  p = head;

  // Flag is used to keep track of whether the key was found.
  int flag = 0;

  // Continue traversing until p reaches NULL,
  // which indicates the end of the linked list.
  while(p != NULL){

    // Move p to the next node.
    p = p->next;

    // Check whether the current node contains the key.
    if(p->data == key){

      // Set flag to 1 if the key is found.
      flag = 1;

    }

  }

  // If flag is 1, the element was found.
  if(flag == 1){

    printf("Element found");

  }

  // Otherwise, the element was not found.
  else{

    printf("Element not found");

  }

}
