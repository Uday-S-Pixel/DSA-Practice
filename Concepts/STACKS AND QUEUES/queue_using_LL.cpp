#include <iostream>
#include <cstdlib>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void push();
void pop();
void peek();
bool isempty();

int main(){

  cout << "#### QUEUE IMPLEMENTATION LINKED LISTS ####";

  while(1){

    cout << "\n1.PUSH" << "\n2.POP" << "\n3.PEEK" << "\n4.ISEMPTY" << "\n5.EXIT";

    int ch;
    cout << "\nEnter choice: ";
    cin >> ch;

    switch(ch){

      case 1:{
        push();
        break;
      }

      case 2:{
        pop();
        break;
      }

      case 3:{
        peek();
        break;
      }

      case 4:{
        if(isempty()){
          cout << "QUEUE IS EMPTY";
        }
        else{
          cout << "QUEUE IS NOT EMPTY";
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
}

void push(){

  Node* temp = new Node();

  cout << "Enter value: ";
  cin >> temp -> data;

  temp -> next = NULL;

  // if queue is empty, make the new node both front and rear
  if(front == NULL){
    front = temp;
    rear = temp;
  }
  else{
    // add the new node at the rear
    rear -> next = temp;
    rear = temp;
  }
}

void pop(){

  if(isempty()){
    cout << "QUEUE UNDERFLOW";
  }
  else{

    Node* p;
    p = front;

    // move front to the next node
    front = p -> next;

    // delete the previous front node
    p -> next = NULL;
    delete p;

    // if queue becomes empty, rear should also be NULL
    if(front == NULL){
      rear = NULL;
    }
  }
}

void peek(){

  if(isempty()){
    cout << "QUEUE UNDERFLOW";
  }
  else{
    cout << front -> data;
  }
}

bool isempty(){

  if(front == NULL){
    return true;
  }
  else{
    return false;
  }
}
