#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int>count1;
        unordered_map <char,int>count2;

        // character hashing
        for (char ch:s){
            count1[ch]++;
        }
        for (char ch:t){
            count2[ch]++;
        }

        // if frequency of each character is same then
        // it is a valid anagram
        if(count1 == count2){
            return true;
        }
        else{
            return false;
        }
    }
};
