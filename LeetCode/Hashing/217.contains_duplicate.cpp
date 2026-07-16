/*
  Current idea:
  Sort + Adjacent elements comparison
*/

#include <algorithm>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int left = 0;
        int right = 1;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        // sorting so that duplicate elements become adjacent
        while(right < n){
          // adjacent elements comparison
            if(nums[left] == nums[right]){
            return true;
            }
            left ++;
            right ++;
        }
        return false;
    }

};
