class Solution {
public:
    int maxProduct(int n) {
        int d1 = 0, d2 = 0;
        while (n > 0) {
            int cur = n % 10;
            if (cur > d1) { d2 = d1; d1 = cur; }
            else if (cur > d2) { d2 = cur; }
            n /= 10;
        }
        return d1 * d2;
    }
};
