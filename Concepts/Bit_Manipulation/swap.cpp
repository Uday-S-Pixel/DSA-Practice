#include <iostream>
using namespace std;

int main(){
  int a = 5,b = 6;
  /*
   Swapping two variables with the the help of a 3rd variable
   int temp;
   temp = a;
   a = b;
   b = temp;
   This technique of swapping requires a 3rd variable
   But we can make use of the XOR operator (or) ^ and make swap using two variables
  */

  // Swapping two variables using the xor operator
  a = a ^ b;
  b = a ^ b;

  // Internally
  // a ^ b = (a ^ b) ^ b
  // xor operation of same number will give zero
  // hence b = a ^ b will give a

  a = a ^ b;

  // a ^ b  will become like
  // (a ^ b) ^ a = b
  // hence a = b

  cout << a <<  " " << b;

  return 0;
}
