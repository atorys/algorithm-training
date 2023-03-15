//
// Created by mveli on 13.03.2023.
//
#include <iostream>

int main() {
    int count, station1, station2;
    std::cin >> count;
    std::cin >> station1;
    std::cin >> station2;

    std::cout << std::min(std::abs(station2 - station1), count - std::max(station1, station2) + std::min(station1, station2)) - 1;
}