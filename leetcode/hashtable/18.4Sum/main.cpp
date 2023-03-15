//
// Created by mveli on 14.03.2023.
//
//
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, std::vector<std::vector<int>>> set;
        std::unordered_map<int, std::vector<std::vector<int>>>::iterator it;
        // target - x, {{}};

        for (int i = 0; i < nums.size(); ++i) {
            for (it = set.begin(); it != set.end(); ++it) {
                if (set.count(it->first - nums[i]))

                set[it->first - nums[i]] = set[it->first];
                for (auto & v : set[it->first - nums[i]]) {
                    v.push_back(nums[i]);
                }
            }
            set[target - nums[i]].push_back({nums[i]});
//            if (target - nums[i] == 0) {
//                return set[target - nums[i]];
//            }
        }
        return set[0];
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;
    std::vector<std::vector<int>> answers = solution.fourSum(nums, target);

    std::cout << "[";
    for (auto & group : answers) {
        std::cout << "[";
        for (auto& v: group) {
            std::cout << v << " ";
        }
        std::cout << "], ";
    }
    std::cout << "]";

}