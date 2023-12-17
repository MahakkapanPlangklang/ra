#include <iostream>

int main() {
    
    double num1, num2, result;
    char mark;

    
    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    std::cout << "Enter operator: ";
    std::cin >> mark;

    
    switch (mark) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Cannot divide by zero!" << std::endl;
                return 1;  
            }
            break;
        case '>':
            std::cout << "" << std::endl;
            return 0;  
        default:
            std::cout << "Invalid mark!!" << std::endl;
            return 1;  
    }

    
    std::cout << "Result: " << result << std::endl;

    return 0;
}

