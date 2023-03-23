//
// Created by mveli on 13.03.2023.
//
#include <iostream>

int main() {

    int n;
    std::cin >> n;

    int colors[n];
    int min_index = 0, max_index = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> colors[i];
    }

    for (int i = 1; i < n; ++i) {
        if (colors[i] >= colors[max_index])
            max_index = i;
        if (colors[i] < colors[min_index])
            min_index = i;
    }

    std::cout << max_index + 1 << " " << min_index + 1;
    return 0;
}