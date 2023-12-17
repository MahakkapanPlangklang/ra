#include <iostream>

int main() {

    int a, b, c;

    std::cout << "Enter the length of side 1: ";
    std::cin >> a;

    std::cout << "Enter the length of side 2: ";
    std::cin >> b;

    std::cout << "Enter the length of side 3: ";
    std::cin >> c;

    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            std::cout << "Equilateral" << std::endl;
        } else if (a == b || b == c || a == c) {
            std::cout << "Isosceles" << std::endl;
        } else {
            std::cout << "Scalene" << std::endl;
        }
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}

