// Goal - To find the missing number in a given array of integers
// Learnt from strivers dsa sheet

// Approach
// Start from 1 and search the array 
// Until u find the missing number in the array
#include <iostream>
using namespace std;

int main(){
   int n;
   cout << "Enter the size of the array: ";
   cin >> n;
   // n is to find for how much range we need to check the missing number
  
   int numbers[n];
   for(int i = 0;i < n;i ++){
    cin >> numbers[i];
   }
   int no = 1;
   // initialising the variable
  
   while(true){
    bool found = false;
    // a boolean variable to check whether the number exists in the array or not
    for(int i = 0;i < n;i ++){
      if(numbers[i] == no){
        // if u found the number in the array
        // set found to be true
        found = true;
        break;
      }
    }
    if(!found){
      // if u did not find the number throughout the array
      // then it is the missing number in the array
      cout << "The missing number is " << no;
      break;
    }
    no ++;
   }

}



