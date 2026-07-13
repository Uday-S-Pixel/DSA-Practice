class Solution {
public:
    bool isPalindrome(string s) {
      int left = 0;
      int right = s.size() - 1;
      while(left < right){
        if (!isalnum(s[left])) {
           // isalnum is a method to check whether the character
           // is alphanumeric
            left++;
            continue;
        }
        if (!isalnum(s[right])) {
            right--;
            continue;
        }
        if(tolower(s[left]) != tolower(s[right])){
            return false;
            // tolower changes uppercase to lowercase
            // as if s[left] = w and s[right] = W
            // it will result in a false which should be true
        }
        left ++;
        right --;
      }
      return true;

    }
};
