//
// Created by mveli on 16.03.2023.
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int middle;

        while (left <= right) {
            middle = (left + right) / 2;

            if (nums[middle] == target)
                return middle;

            if (nums[middle] > target)
                right = middle - 1;
            else
                left = middle + 1;
        }

        return -1;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    std::cout << "index = " << solution.search(nums, target);
}