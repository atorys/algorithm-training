//
// Created by mveli on 14.03.2023.
//
#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> indexes;

        for (int i = 0; i < nums.size(); ++i) {
            if (indexes.find(target - nums[i]) != indexes.end())
                return {indexes[target - nums[i]], i};
            indexes[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution solution;
    std::vector<int> vector = {3, 3};
    int target = 6;
    std::vector indexes = solution.twoSum(vector, target);
    std::cout << indexes[0] << ", " << indexes[1];

}