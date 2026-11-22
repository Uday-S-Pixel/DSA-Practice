// Time Complexity - O(nlogn)
// Due to use of sort function 
// Space Complexity - O(n)
// check string copies s string of length n

class Solution {
public:
    bool checkString(string s) {
        string check = s;
        sort(check.begin(),check.end());
        if(s == check){
            return true;
        }
        else{
            return false;
        }
    }
};
