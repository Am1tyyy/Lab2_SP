#include <iostream>
#include "calculator.h"

int main() {
    int a = 5, b = 3;

    std::cout << "Addition: " << calc::add(a, b) << std::endl;
    std::cout << "Subtraction: " << calc::subtract(a, b) << std::endl;

    return 0;
}
