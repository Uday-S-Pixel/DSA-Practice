class Solution { 
public: 
    int removeDuplicates(vector<int>& nums) { 

        // l points to the position of the last unique element.
        int l = 0; 

        // r is used to traverse the array and find new unique elements.
        int r = 1; 

        // Start checking from the second element.
        for(r = 1;r < nums.size();r ++){ 

            // If the current element is different from the
            // last unique element, we have found a new unique element.
            if(nums[r] != nums[l]){ 

                // Move l to the next position where the new
                // unique element should be placed.
                l++; 

                // Copy the new unique element to the l position.
                nums[l] = nums[r]; 
            } 
        } 

        // l represents the index of the last unique element.
        // Therefore, the number of unique elements is l + 1.
        return l + 1; 
    } 
};
