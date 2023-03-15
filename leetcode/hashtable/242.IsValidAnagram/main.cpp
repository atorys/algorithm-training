//
// Created by mveli on 14.03.2023.
//
//
#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        return std::equal(s.begin(), s.end(), t.begin(), t.end());
    }
};

int main() {
    Solution solution;
    std::cout << solution.isAnagram("vector", "rotcev");
}