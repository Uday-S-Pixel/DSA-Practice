#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){

  // unordered_map is used to store:
  // key   -> array element
  // value -> frequency of that element
  unordered_map<int,int> mp;

  int n;
  cout << "Enter size of array: ";
  cin >> n;

  int arr[n];

  // Taking the array elements as input
  cout << "Enter the array elements: ";
  for(int i = 0;i < n;i ++){
    cin >> arr[i];
  }

  // Hashing the array elements
  // Every occurrence of arr[i] increases its frequency by 1
  for(int i = 0;i < n;i ++){
    mp[arr[i]]++;
  }

  // Traversing the unordered_map
  // it.first represents the element
  // it.second represents its frequency
  for(auto it:mp){
    cout << "Element: " << it.first
    << "Freuency: " << it.second;
  }

  // code to find highest and least frequency element

  // highFreq stores the highest frequency encountered
  int highFreq = 0;

  // lowFreq stores the lowest frequency encountered
  // INT_MAX ensures that the first actual frequency
  // will always be smaller than its initial value
  int lowFreq = INT_MAX;

  // Stores the elements having highest and lowest frequencies
  int highElement;
  int lowElement;

  // Traverse the array and obtain the frequency
  // of each element from the unordered_map
  for(int i = 0;i < n;i ++){

    // If the current element has a frequency greater
    // than the highest frequency found so far
    if(mp[arr[i]] > highFreq){

      highFreq = mp[arr[i]];
      highElement = arr[i];

    }

    // If the current element has a frequency smaller
    // than the lowest frequency found so far
    if(mp[arr[i]] < lowFreq){

      lowFreq = mp[arr[i]];
      lowElement = arr[i];

    }

  }

  // Display the element having the highest frequency
  cout << "Element " << highElement << "has highest frequency with " << highFreq << endl;

  // Display the element having the lowest frequency
  cout << "Element " << lowElement << "has lowest frequency with " << lowFreq
  << endl;

  return 0;
}
