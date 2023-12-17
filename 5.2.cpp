#include <iostream>

int main() {
    
    int n, x, sum = 0, max = INT_MIN;  

    
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> x;

        
        sum += x;

        
        if (x > max) {
            max = x;
        }
    }

    
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Max: " << max << std::endl;

    return 0;
}

