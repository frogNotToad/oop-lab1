#include <string>
#include "../include/is_valid_parentheses.h"
 
bool is_valid_parentheses(std::string line) {
    int opened{0};
 
    for (char parenthesis : line) {
        if (parenthesis == '(') {
            ++opened;
        }
        else {
            --opened;
        }
 
        if (opened < 0) {return false;}
    }
 
    if (opened != 0) {return false;}
    return true;
}