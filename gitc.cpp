#include <iostream>

int main() {
    int num1, num2, diff;

    // Asking for user input
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter 2 number: ";
    std::cin >> num2;

    // Calculating sum
    diff = num1 - num2;

    // Displaying result
    std::cout << "diff: " << diff << std::endl;

    return 0;
}

