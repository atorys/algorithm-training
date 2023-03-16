//
// Created by mveli on 16.03.2023.
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        std::vector<int> pref(nums.size(), 1);
        std::vector<int> suf(nums.size(), 1);

        int left = 1;
        int right = nums.size() - 2;

        while (left < nums.size() && right >= 0) {
            pref[left] = pref[left - 1] * nums[left - 1];
            suf[right] = suf[right + 1] * nums[right + 1];

            ++left;
            --right;
        }

        for (int i = 0; i < nums.size(); ++i) {
            pref[i] *= suf[i];
        }

        return pref;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1,2,3,4};

    std::vector<int> ans = solution.productExceptSelf(nums);
    std::cout << "[";
    for (auto & number : ans) {
        std::cout << number << ", ";
    }
    std::cout << "]";
}