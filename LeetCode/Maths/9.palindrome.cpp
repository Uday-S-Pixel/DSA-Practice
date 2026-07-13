
class Solution {
public:
    bool isPalindrome(int x) {
        long long palin = 0;
        // like in the reverse number problem
        // if u reverse an integer number 
        // it might turn into out of bounds and raise an error
        int original = x;
        while(x>0){
         int rem = x % 10;
         palin = palin * 10 + rem;
         x = x / 10;
        }
        if (palin == original){
            return true;
        }
        else{
        return false;}
    }
};
