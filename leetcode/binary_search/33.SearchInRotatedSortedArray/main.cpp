//
// Created by mveli on 16.03.2023.
//
#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, middle;

        while (left <= right) {
            middle = (left + right) / 2;
            if (nums[middle] == target)
                return middle;

            if (nums[middle] < target) {}

//            if (nums[left] <= nums[middle]) {
//                if (nums[middle] < target || target < nums[left])
//                    left = middle + 1;
//                else
//                    right = middle - 1;
//            } else {
//                right = middle - 1;
//            }
        }

        return -1;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {5,1,3};
    int target =3;
    std::cout << "index = " << solution.search(nums, target);
}