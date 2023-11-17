#include <iostream>

int main() {
    int number = 0;
    int revNumber = 0;

    std::cout << "Please enter the number: ";
    std::cin >> number;

    int originNumber = number; // Store the original number for reference

    while (number > 0) {
        int digit = number % 10;
        revNumber = revNumber * 10 + digit;
        number /= 10;
    }

    std::cout << "Revers of " << originNumber << " = " << revNumber << std::endl;

    return 0;
}