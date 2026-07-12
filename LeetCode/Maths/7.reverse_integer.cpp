#include <climits>
//used for INT_MAX and INT_MIn

class Solution {
public:
    int reverse(int x) {
        int reminder;
        long long rev_no = 0;
        // when u reverse a large number like 2,147,483,647
        // it will go out of integer bounds and error raises
        // or something called dataoverflow error
        while(x != 0){
        reminder = x % 10;
        rev_no = rev_no * 10 + reminder;
        x = x / 10;
        }
        if(rev_no > INT_MAX || rev_no < INT_MIN)
        {
          // if rev_no crosses the bounds of integer 
          // we return 0 to end the process as the function cannot 
          // return anything above integer bounds
         return 0;
        }
        return rev_no;
    }
};
