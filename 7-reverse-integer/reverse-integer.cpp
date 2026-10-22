class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        long long y = x;
        if (y < 0) {
            y = -y;
        }
        while (y > 0) {
            rev = rev * 10 + y % 10;
            y /= 10;
        }
        if (x < 0) {
            rev = -rev;
        }
        if (rev > 2147483647 || rev < -2147483648LL) {
            return 0;
        }
        return (int)rev;
    }
};