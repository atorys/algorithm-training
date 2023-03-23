//
// Created by mveli on 13.03.2023.
//
#include <iostream>
#include <vector>

int main() {

    int n, k;
    std::cin >> n >> k;

    std::vector<int> array(n);
    std::vector<long long> sums(n + 1, 0);
    std::vector<int> null_elements_count(n + 1, 0);
    int count = 0;

    std::cin >> array[0];
    if (array[0] <= k)
        count += 1;
    for (int i = 1; i < n; ++i) {
        std::cin >> array[i];
        if (array[i] <= k)
            count += 1;
        sums[i] = sums[i - 1] + array[i - 1];
        null_elements_count[i] = null_elements_count[i - 1] + (array[i - 1] == 0);
    }
    sums[n] = sums[n - 1] + array[n - 1];
    null_elements_count[n] = null_elements_count[n - 1] + (array[n - 1] == 0);

    int left = 0, right = left + 1;
    while (left < n) {
        if (null_elements_count[right + 1] - null_elements_count[left] <= 1
            && sums[right + 1] - sums[left] <= k) {
//            std::cout << "[" << left << "," << right << "]" << " ";
            count += 1;
        } else {
            left = right;
            right = left + 1;
            ++left;
            continue;
        }

        if (right < n)
            ++right;
    }

//    std::cout << std::endl;
    std::cout << count;

    return 0;
}