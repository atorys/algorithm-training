//
// Created by mveli on 13.03.2023.
//
#include <iostream>

int main() {
    int x,y,z;
    std::cin >> x;
    std::cin >> y;
    std::cin >> z;

    std::cout << ((x == y) ? 1 : (y <= 12 xor x <= 12));

    return 0;
}
