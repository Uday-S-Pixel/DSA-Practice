
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        k %= n;
        // when a array is rotated n time i.e the size
        // it will retrun back to its original 
        // so we calculate when the array wil return to its original state 
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
