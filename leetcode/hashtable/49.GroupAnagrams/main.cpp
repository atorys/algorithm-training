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
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> dictionary;

        for (auto & str : strs) {
            std::string key(str);
            std::sort(key.begin(), key.end());
            dictionary[key].push_back(str);
        }

        std::vector<std::vector<std::string>> ans;
        for (auto & it : dictionary) {
            ans.push_back(it.second);
        }
        return ans;
    }
};

int main() {
    Solution solution;
    std::vector<std::string> vector = {"eat","tea","tan","ate","nat","bat"};
    std::vector<std::vector<std::string>> anagrams = solution.groupAnagrams(vector);

    std::cout << "[";
    for (auto & anagram : anagrams) {
        std::cout << "[";
        for (auto & j : anagram) {
            std::cout << j << ",";
        }
        std::cout << "]";
    }
    std::cout << "]";

}