class Solution {
public:
    int alternateDigitSum(int n) {
        int a = n;
        int count = 0;
        int sign = 0;
        int  sum = 0;
        int digit = 0;

        while (a > 0) {
            count++;
            a /= 10;
        }

        if (count % 2 == 0) {
            sign = -1;
        } else {
            sign = 1;
        }


        while (n > 0) {
            digit = n % 10;
            sum += sign*digit;
            n /= 10;
            sign *= -1;
        }
        return sum;
    }
};