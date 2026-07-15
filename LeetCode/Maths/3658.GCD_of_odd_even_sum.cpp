class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int o_sum = n * n;
        int e_sum = n * (n + 1);
        int gcd = 1;
        int min = (e_sum < o_sum) ? e_sum : o_sum;
        for(int i = 1;i <= min;i ++){
            if((e_sum % i == 0) && (o_sum % i == 0)){
                gcd = i;
            }
        }
        return gcd;
    }
};
