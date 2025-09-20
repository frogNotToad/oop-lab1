#include <iostream>
#include <string>
 
#include "include/is_valid_parentheses.h"
 
int main() {
    std::string input;
 
    std::cout << "Введите скобочную последовательность: ";
    std::getline(std::cin, input);
 
    if (is_valid_parentheses(input)) {
        std::cout << "Порядок скобок правильный";
    }
    else {
        std::cout << "Порядок скобок неправильный";
    }
    std::cout << std::endl;
    return 0;
}