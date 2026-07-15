#include <iostream>
using namespace std;

int main(){
  int arr[100],n,i,j,key;
  cout << "Enter the size of the array: ";
  cin >> n;
  cout << "Enter the elements of the array: ";
  for(i = 0;i < n;i ++){
    cin >> arr[i];
  }

  /*
  Insertion Sort
  The main Idea is to divide the array into sorted and unsorted parts
  for every iteration we add one unsorted element into the sorted part
  Hence the name Insertion is given
  Inserting from unsorted part to sorted*/

  //The first element added into the sorted region is automatically sorted
  //Hence j = i - 1 and i = 1
  for(i = 1;i < n;i ++){
    j = i - 1;
    key = arr[i];
    // key variable to preserve the value while swapping
    while(j >= 0 && arr[j] > key){
      arr[j + 1] = arr[j];
      j --;
    }
    arr[j + 1] = key;
  }

  cout << "The array in sorted order: ";
  for(i = 0;i < n;i ++){
    cout << arr[i] << " ";
  }
  return 0;
}
