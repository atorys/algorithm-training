//
// Created by mveli on 14.03.2023.
//
#include <iostream>
#include <vector>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int target = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            target ^= nums[i];
        }
        return target;
    }
};

int main() {
    Solution solution;
    std::vector<int> vector = {0, 1, 2, 1, 2, 0, 5};
    std::cout << solution.singleNumber(vector);
}