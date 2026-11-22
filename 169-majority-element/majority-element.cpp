class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        int majorityElement = nums[0];
        int frequency = 1;
        for (int i = 1; i < size; i++) {
            if (nums[i] == nums[i-1]) {
                frequency++;
            } else {
                frequency = 1;
                majorityElement = nums[i];
            }
            if (frequency > size/2) {
                return majorityElement;
                break;
            }
        }
        return majorityElement;
    }
};