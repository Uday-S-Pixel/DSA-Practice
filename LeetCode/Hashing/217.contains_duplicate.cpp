// Brute Force Solution
// Time Complexity - O(n^2)
// Space COmplexity - O(1)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      for(int i = 0;i < nums.size();i ++){
        for(int j = i + 1;j < nums.size();j ++){
          if(nums[i] == nums[j]){
            return true;
          // if one or more than same type of element is present 
          // duplicate is present
          }
        }}
        return false;
       }
    };

// Medium Solution
// Time Complexity - O(nlogn)
// Space Complexity - O(1)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      for(int i = 0;i + 1 < nums.size();i ++){
        // We sort and make the dupliates come in adjacent places
        // so we can just compare adjacent elements
        // without comparing every element with each other
        if(nums[i] == nums[i + 1]{
          return true;
        }
        return false;
       }
    };

// Optimal Solution - uses hash set
// TIme Complexity - O(1)
// Space COmplexity - O(n) - usage of hash table

#include <unordered_set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       std::unordered_set <int> s;
       for(int n:nums){
        if(s.count(n)){
          // count returns 1 if the element is already stored in the hash set
            return true;
        }
        s.insert(n);
       }
        return false;
       }
    };
