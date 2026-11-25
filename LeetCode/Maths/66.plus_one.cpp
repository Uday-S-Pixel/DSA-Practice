class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        if(digits[i] == 9){
         digits[i] == 0;
         digits[i - 1] += 1;
        }
        else{
            digits[i] += 1;
        }
        return digits;
    }
};
