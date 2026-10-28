class Solution {
public:
    int totalMoney(int n) {
        int w = n/7;
        int total = ((7*w*(w+7))/2), extra = 0;
        int monday = w + 1;
        int i = 0;
        while (i < n % 7) {
            extra += monday;
            monday++;
            i++;
        }
        return total + extra;
    }
};