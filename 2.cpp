#include <iostream>

int main() {

    double num1, num2, result;
    char operation;

    std::cout << "Enter two real numbers and an arithmetic operator (+, -, *, /, > to exit): ";
    std::cin >> num1 >> num2 >> operation;

    switch (operation) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "Result: " << result << std::endl;
            } else {
                std::cout << "Error: Division by zero" << std::endl;
            }
            break;
        case '>':
            std::cout << "Exiting the program." << std::endl;
            break;
        default:
            std::cout << "Invalid mark!!" << std::endl;
    }

    return 0;
}

