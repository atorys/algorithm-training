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

    bool isPalindrome(std::string s) {
        int left = 0;
        int right = s.size() - 1;
        bool result = true;

        while (left <= right) {
            if (!std::isalnum(s[left])) {
                ++left;
                continue;
            }

            if (!std::isalnum(s[right])) {
                --right;
                continue;
            }

            result = result && (std::tolower(s[left]) == std::tolower(s[right]));
            ++left;
            --right;
        }

        return result;
    }
};

int main() {
    Solution solution;
    std::cout << (solution.isPalindrome("A man, a plan, a canal: Panama") ? "true" : "false");
}