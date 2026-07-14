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
  Selection Sort
  We perform swapping by finding out the smallest element in the array
  Unlike bubble sort the elements will be sorted right to left
  in selection sort
  */
 for(i = 0;i < n;i ++){
  for(j = i + 1;j < n;j ++)
  {
    if(arr[i] > arr[j]){
     t = arr[i];
     arr[i] = arr[j];
     arr[j] = t;
    }
  }
 }
 cout << "The array in sorted order is: ";
 for(i = 0;i < n;i ++){
  cout << arr[i] << " ";
 }
}
