class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int multiple = k;
        // consider first multiple of k
        while(true){
         bool found = false;
         // boolean variable to check whether the multiple is found or not
         for(int i = 0;i < nums.size();i ++){
            if(nums[i] == multiple){
              // if the current multiple is found 
              // set found to be true
                found = true;
                break;
            }
         }
         if(!found){
           // if u do not find the multiple in the array
           // the multiple is the smallest multiple of k
            return multiple;
         }
         multiple += k;
        // to get multiples of k i.e;
        // k,k + k, 2k + k,......
        // k,2k,3k,4k,....
        }
    }
};
