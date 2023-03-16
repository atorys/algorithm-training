//
// Created by mveli on 16.03.2023.
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::vector<int> partitionLabels(std::string s) {
        std::vector<int> ans = {};
        int left = 0;
        int last = 0;

        for (int i = 0; i < s.size(); ++i) {
            last = std::max(last, (int)s.find_last_of(s[i]));

            if (i == last) {
                ans.push_back(i - left + 1);
                left = i + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    std::vector<int> v = solution.partitionLabels("ababcbacadefegdehijhklij");

    std::cout << "[";
    for (auto & str : v) {
        std::cout << str << ", ";
    }
    std::cout << "]";
}