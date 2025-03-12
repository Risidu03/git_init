


Difference Calculator

This is a simple C++ program that calculates the difference between two integers input by the user.

Features

Takes two integer inputs from the user

Computes their difference

Displays the result

Usage

Clone the repository:

git clone <repository-url>

Navigate to the project directory:

cd <repository-name>

Compile the C++ program using a compiler like g++:

g++ -o difference_calculator main.cpp

Run the executable:

./difference_calculator

Enter two numbers when prompted, and the program will display their difference.

Code

#include <iostream>

int main() {
    int num1, num2, diff;

    // Asking for user input
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Calculating difference
    diff = num1 - num2;

    /
