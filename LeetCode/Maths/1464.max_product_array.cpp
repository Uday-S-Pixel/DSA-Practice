#include <algorithm>
class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n = nums.size();
       std::sort(nums.begin(),nums.end());
       int i = n - 1;
       int j = n - 2;
       return (nums[i] - 1) * (nums[j] - 1);
    }
};
