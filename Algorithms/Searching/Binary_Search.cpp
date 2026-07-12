#include <algorithm>
#include <iostream>
using namespace std;

int main(){
  int arr[100],n,key,i;
  cout << "Enter the size of the array: ";
  cin >> n;
  cout << "Enter the elements of the array: ";
  for(i = 0;i < n;i ++){
    cin >> arr[i];
  }
  cout << "Enter the element u want to search: ";
  cin >> key;
  // Sort the array to apply binary search
  sort(arr, arr + n);
  int low = 0;
  int middle;
  int high = n - 1;

  /*
   Binary Search(Can be used when array is sorted)
   Instead of searching the whole array every time
   We reduce the search space by 2 for each iteration
   Making it an efficient method for searching when array is sorted
  */
 
  while(low <= high){
    middle = (low + high) / 2;
    if(arr[middle] == key){
      return 0;
    }
    else if(key > arr[middle]){
      low = middle + 1;
      // Why + 1?
      // as we already searched the middle element
      // we do not include it in the search space
    }
    else{
      high = middle - 1;
      // Similar to that of the above case
    }
  }
}
