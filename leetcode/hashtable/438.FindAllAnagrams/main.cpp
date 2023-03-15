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
    std::vector<int> findAnagrams(std::string s, std::string p) {

        std::vector<int> ans;
        std::map<char, int> keys, local_keys;
        int size = p.size() - 1;

        for (char& ch : p) {
            keys[ch] += 1;
        }
        for (int i = 0; i < p.size(); ++i) {
            local_keys[s[i]] += 1;
            if (!keys.count(s[i]))
                keys[s[i]] = 0;
        }
        if (keys == local_keys)
            ans.push_back(0);

        for (int i = 1; i < s.size(); ++i) {
            if (i + p.size() > s.size())
                break;
            if (!keys.count(s[i + size]))
                keys[s[i + size]] = 0;
            local_keys[s[i + size]] += 1;
            local_keys[s[i - 1]] -= 1;

            if (keys == local_keys)
                ans.push_back(i);
        }
        return ans;
    }
};

int main() {
    Solution solution;
    std::vector<int> indexes = solution.findAnagrams("cbaebabacd", "abc");

    std::cout << "[";
    for (auto & index : indexes) {
        std::cout << index << " ";
    }
    std::cout << "]";

}