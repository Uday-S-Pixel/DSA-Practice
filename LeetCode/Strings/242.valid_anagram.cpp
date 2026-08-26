/*
Approach - Character Hashing

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
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        // if the lengths of the string is not equal then
        // it is obviously not an anagram

        int count[26] = {0};
        // to count the frequency of each character in the strings
    
        for(char ch:s){
          count[ch - 'a']++;
        }
        for(char ch:t){
            count[ch - 'a']--;
        }
        for(int i = 0;i < 26;i ++){
            if(count[i] != 0){
                return false;
                // if it is not zero means 
                // there are no equal number of characters in the string
                // returning false
            }
        }
        return true;
        }
        
    };
