// Time Complexity - O(logn)
// Space Complexity - O(1)

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            int middle = (left + right) / 2;
            if(nums[middle] == target){
                return middle;
            }
            if(target > nums[middle]){
              left = middle + 1;
            }
            else{
                right = middle - 1;
            }
        }
        return left;
    }
};
