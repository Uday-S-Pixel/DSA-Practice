#include <iostream>
using namespace std;

int main(){
  int n, i,key;
  cout << "Enter the size of the array: ";
  cin >> n;
  int arr[n];

  cout << "Enter the elements of the array: ";
  for(i = 0;i < n;i ++){
    cin >> arr[i];
  }

  cout << "Enter the element u want to search: ";
  cin >> key;
 
  // Linear Search
  // To search in a straight line manner (or) one by one

  for(i = 0;i < n;i ++){
    if(arr[i] == key){
      cout << "Element " << key << " found at position " << i + 1;
      return 0;
    }
  }
  cout << "Element not found ";
}
