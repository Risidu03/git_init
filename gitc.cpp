#include <iostream>

int main() {
    int num1, num2, sum;

    // Asking for user input
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Calculating sum
    sum = num1 + num2;

    // Displaying result
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}

