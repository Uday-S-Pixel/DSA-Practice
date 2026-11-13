// Time Complexity - O(m + n)
// Space Complexity - O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int columns = matrix[0].size();

        int r = 0;
        int c = columns - 1;

        while(r < rows && c >= 0){
            if(target == matrix[r][c]){
                return true;
            }
            else if(target > matrix[r][c]){
                r ++;
            }
            else{
                c --;
            }
        }
        return false;
    }
};
