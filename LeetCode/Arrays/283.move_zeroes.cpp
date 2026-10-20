
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        // Move all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }

        // Fill the remaining positions with zeroes
        while (j < nums.size()) {
            nums[j] = 0;
            j++;
        }
    }
};

//Optimal Solution
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int NonZ = 0;
        for(int  i = 0;i < nums.size();i ++){
            if(nums[i] != 0){
                // if we encounter a non zero integer swap its postion to initial
                // positions
                swap(nums[i],nums[NonZ]);
                NonZ ++;
            }
        }
    }
};
