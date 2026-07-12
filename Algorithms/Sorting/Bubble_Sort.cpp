#include <iostream>
using namespace std;

int main(){
  int arr[100],n,i,j,t;
  cout << "Enter the size of the array: ";
  cin >> n;
  cout << "Enter the elements of the array: ";
  for(i = 0;i < n;i ++){
    cin >> arr[i];
  }
  
  /*
  Bubble Sort
  The main Idea is to compare adjacent elements  and swap them immediately
  */
  for(i = 0;i < n - 1;i ++){
    for(j = 0;j < n - i - 1;j ++){
      if(arr[j] > arr[j + 1]){
        //Swapping Logic
        t = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = t;
      }
    }
  }
  cout << "\nThe elements in sorted order: ";
  for(i = 0;i < n;i ++){
    cout << arr[i] << "  ";
  }

  return 0;
}
