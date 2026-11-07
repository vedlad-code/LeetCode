class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN, cs = 0;
    for (int i : nums) {
        cs += i;
        maxSum = max(cs, maxSum);
        if (cs < 0) {
            cs = 0;
        }
    }
    return maxSum;
    }
};