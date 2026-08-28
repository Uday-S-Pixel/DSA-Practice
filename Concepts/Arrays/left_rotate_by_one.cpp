#include <stdio.h>

#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;
  cout << "Enter the size of array: ";
  cin >> n;

  int arr[n],i;
  cout << "Enter array elements: ";
  for(int i = 0;i < n;i ++){
    cin >> arr[i];
  }

  // Store the first element before shifting the array.
  int first = arr[0];

  // Shift every element one position towards the left.
  // The element at index i is copied to index i - 1.
  for(i = 1;i < n;i ++){

    arr[i - 1] = arr[i];

  }

  // Place the original first element at the last position.
  arr[n - 1] = first;

  cout << "Resultant array: ";

  for(int i = 0;i < n;i ++){

    cout << arr[i];

  }

  return 0;

}
