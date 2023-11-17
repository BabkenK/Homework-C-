#include <iostream>

int main() {
    int number = 0;
    int sum = 0;

    std::cout << "Please enter the number: ";
    std::cin >> number;

    int originNumber = number; // Store the original number for reference

    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    std::cout << "Sum of the digits of " << originNumber << " = " << sum << std::endl;

    return 0;
}