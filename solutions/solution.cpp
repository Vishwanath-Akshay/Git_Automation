#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int actualSum = 0, totalSum = 0;
        int n = nums.size();

        for (int num : nums) {
            actualSum += num;
        }

        totalSum = (n * (n + 1)) / 2;

        return totalSum - actualSum;
    }
};