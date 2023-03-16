//
// Created by mveli on 16.03.2023.
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    int minSubArrayLen(int target, std::vector<int>& nums) {

        std::vector<int> prefix_sums(nums.size() + 1, 0);
        int left = 0, right = 0, curr, min_len = nums.size() + 1;

        for (int i = 1; i < nums.size() + 1; ++i) {
            prefix_sums[i] = prefix_sums[i - 1] + nums[i - 1];
        }

        while (left < nums.size()) {

            curr = prefix_sums[right + 1] - prefix_sums[left];
            if (curr >= target) {
                min_len = std::min(min_len, right + 1 - left);
                ++left;
            }
            else if (right < nums.size() - 1)
            {
                ++right;
            }
            else
            {
                ++left;
            }
        }
        return (min_len > nums.size()) ? 0 : min_len;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1,2,3,4,5};
    int target = 15;
    std::cout << solution.minSubArrayLen(target, nums);
}