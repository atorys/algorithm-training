//
// Created by mveli on 13.03.2023.
//
#include <iostream>

int calcResult(int exitCode, int interactor, int checker)
{
    int result = interactor;
    bool nullable = (exitCode == 0);

    switch (interactor) {
        case 0:
            result = nullable ? checker : 3; break;
        case 1:
            result = checker; break;
        case 4:
            result = nullable ? 4 : 3; break;
        case 6:
            result = 0; break;
        case 7:
            result = 1; break;
        default:
            result = interactor;
    }

    return result;
}

int main() {
    int exitCode, checker, interactor;
    std::cin >> exitCode;
    std::cin >> interactor;
    std::cin >> checker;

    std::cout << calcResult(exitCode, interactor, checker);
}