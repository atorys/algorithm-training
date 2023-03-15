//
// Created by mveli on 13.03.2023.
//
#include <iostream>

int main() {

    int n;
    std::cin >> n;

    int houses[n];
    std::cin >> houses[0];
    int middle = houses[0];

    for (int i = 1; i < n; ++i) {
        std::cin >> houses[i];
        middle += houses[i];
    }

    std::cout << middle / n;
    return 0;
}