//
// Created by mveli on 14.03.2023.
//
//
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int max = 0, currentArea = 0;
        int left = 0, right = height.size() - 1;

        while (left < right) {

            currentArea = std::min(height[left], height[right]) * (right - left);
            max = std::max(max, currentArea);

            if (height[right] <= height[left])
                --right;
            else
                ++left;
        }
        return max;
    }
};

int main() {
    Solution solution;
    std::vector<int> v = {1,8,6,2,5,4,8,3,7};
    std::cout << solution.maxArea(v);
}