#include <iostream>

int main() {
    int num;

    // Input: Get a number from the user
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the number is a power of 3
    bool isPowerOfThree = true;

    while (num > 1) {
        if (num % 3 != 0) {
            isPowerOfThree = false;
            break;
        }
        num /= 3;
    }

    // Output: Display whether the number is a power of 3 or not
    if (isPowerOfThree)
        std::cout << "Yes, it is a power of 3." << std::endl;
    else
        std::cout << "No, it is not a power of 3." << std::endl;

    return 0;
}