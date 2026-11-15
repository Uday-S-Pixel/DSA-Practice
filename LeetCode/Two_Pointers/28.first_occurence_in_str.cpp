// Time Complexity - O(N X M)
// Space Complexity - O(M)

// for loop iterates over the haystack variable hence N
// for every iteration cmp is loaded with M size
// A variable cmp of M size is created hence space compleixty is O(M)
class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0;i < haystack.size();i ++){
            string cmp = haystack.substr(i,needle.size());
            if(cmp == needle){
                return i;
            }
        }
        return -1;
    }
};
