//
// Created by mveli on 16.03.2023.
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
private:
    int pick;

    int guess(int num) {
        if (num > pick)
            return -1;
        if (num < pick)
            return 1;
        return 0;
    }

public:

    void set_pick(int num) {pick = num; }

    int guessNumber(int n) {
        bool isSuccess = false;
        unsigned long left = 1, right = n, middle;

        while (left < right && !isSuccess) {
            middle = (left + right) / 2;
            if (guess((int)middle) > 0)
                left = middle + 1;
            else
                right = middle;
        }

        return (int)left;
    }
};

int main() {
    Solution solution;
    solution.set_pick(6);
    int n = 10;
    std::cout << "pick = " << solution.guessNumber(n);
}