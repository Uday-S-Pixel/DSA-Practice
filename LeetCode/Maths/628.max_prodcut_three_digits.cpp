class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int largest = INT_MIN;
        //INT_MIN is the smallest integer C++ can store
        int secondLargest = INT_MIN;
        int thirdLargest = INT_MIN;

        int smallest = INT_MAX;
        //INT_MAX is the largest integer C++ can store
        int secondSmallest = INT_MAX;

        for (int num : nums) {

            // Update three largest
            if (num > largest) {
                thirdLargest = secondLargest;
                secondLargest = largest;
                largest = num;
            }
            else if (num > secondLargest) {
                thirdLargest = secondLargest;
                secondLargest = num;
            }
            else if (num > thirdLargest) {
                thirdLargest = num;
            }

            // Update two smallest
            // when there are negative integers in the array
            // we multiply two negative numbers to give a positive number
            if (num < smallest) {
                secondSmallest = smallest;
                smallest = num;
            }
            else if (num < secondSmallest) {
                secondSmallest = num;
            }
        }

        int product1 = largest * secondLargest * thirdLargest;
        int product2 = largest * smallest * secondSmallest;

        return max(product1, product2);
    }
};
