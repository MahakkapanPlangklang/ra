#include <iostream>

int main() {
    
    double num1, num2, result;
    char mark;

    
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the operator: ";
    std::cin >> mark;

    
    switch (mark) {
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
                std::cout << "Error: Division by zero is undefined." << std::endl;
            }
            break;

        case '>':
            std::cout << "" << std::endl;
            
            break;

        default:
            std::cout << "Invalid mark!!" << std::endl;
            break;
    }

    return 0;
}

