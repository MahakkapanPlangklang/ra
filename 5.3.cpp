#include <iostream>

int main() {
    
    int n;

    std::cout << "Enter the value of n (1-20): ";
    std::cin >> n;

    
    if (n < 1 || n > 20) {
        std::cout << "Invalid input. Please enter a value between 1 and 20." << std::endl;
        return 1;  
    }

    
    for (int i = 0; i < n; ++i) {
        std::cout << i % 2 << " ";
    }

    std::cout << std::endl;

    return 0;
}

