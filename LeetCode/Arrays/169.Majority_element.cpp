#include <unordered_map>

class Solution { 
public: 
    int majorityElement(vector<int>& nums) { 

        // Create an unordered_map to store each element
        // as the key and its frequency as the value.
        unordered_map<int,int>mp; 

        // Count the frequency of every element in the array.
        for(int i = 0;i < nums.size();i ++){ 
            mp[nums[i]] ++; 
        } 

        // highest stores the highest frequency found so far.
        int highest = 0; 

        // element stores the element having the highest frequency.
        int element; 

        // Traverse through the frequency map.
        for(auto it:mp){ 

            // If the current element has a higher frequency
            // than the highest frequency found so far,
            // update both the frequency and the element.
            if(it.second > highest){ 
                highest = it.second; 
                element = it.first; 
            } 
        } 

        // Return the element having the highest frequency.
        return element; 
    } 
};
