class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int total = 0, a = x;
        while (a > 0) {
            total += a % 10;
            a /= 10;
        }
        if (x % total == 0) {
            return total;
        } else {
            return -1;
        }
    }
};