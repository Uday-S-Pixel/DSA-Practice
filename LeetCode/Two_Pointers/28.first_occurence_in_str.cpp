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

// Time Complexity - O(N x M)
// Space Complexity - O(1)
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i,j = 0;
        if(haystack.size() < needle.size()){
            return -1;
        }
        
        for(i = 0;i <= (haystack.size() - needle.size()); i++){
            for(j = 0;j < needle.size();j ++){
                if(haystack[i + j] != needle[j]){
                    break;
                }
            }
            if(j == needle.size()){
              return i;
            }
        } return -1;
    } 
};
