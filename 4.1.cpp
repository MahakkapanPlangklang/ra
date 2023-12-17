#include <iostream>

int main() {
	
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            std::cout << "The character is a vowel" << std::endl;
            break;
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                std::cout << "The character is a consonant" << std::endl;
            } else {
                std::cout << "Invalid character" << std::endl;
            }
    }

    return 0;
}

