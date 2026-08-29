class Solution {
public:
    int singleNumber(vector<int>& nums) {

        // res is initialized to 0 because 0 ^ x = x.
        int res = 0;

        // Apply XOR to every element in the array.
        for(int i = 0;i < nums.size();i ++){

            // Duplicate elements cancel each other because
            // x ^ x = 0, while 0 ^ x = x.
            res = res ^ nums[i];
        }

        // After all duplicate elements cancel out,
        // res contains the element that appears only once.
        return res;
    }
};
