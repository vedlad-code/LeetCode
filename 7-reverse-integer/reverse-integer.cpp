class Solution {
public:
    int reverse(int x){
        long num = 0;
        while (x != 0){
            num = num * 10 + x % 10;
            x /= 10;
        }
        return (num < -2147483648 || num > 2147483647) ? 0 :(int)num;
    }
};