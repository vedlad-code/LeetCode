class Solution {
public:
    int numberOfMatches(int n) {
        int gamecount = 0;
        while (n > 1) {
            if (n % 2 == 0) {
                gamecount += n/2;
                n = n/2;
            } else {
                gamecount += (n-1)/2;
                n = 1 + (n-1)/2;
            }
        }
        return gamecount;
        
    }
};