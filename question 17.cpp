#include <iostream>

int main() {
    char action;
    double sunday, monday, tuesday, wednesday, thursday, friday, saturday;

    std::cout << "Please enter the number that represents the days of the week (1, 2, 3, 4, 5, 6, 7): ";
    std::cin >> action;

    // At USA or UK the day started from sunday until saturday.
    switch (action) {
        case '1':
            std::cout << "Sunday" << std::endl;
            break;

        case '2':
            std::cout << "Monday" << std::endl;
            break;

        case '3':
            std::cout << "Tuesday" << std::endl;
            break;

        case '4':
            std::cout << "Wednesday" << std::endl;
            break;

        case '5':
            std::cout << "Thursday" << std::endl;
            break;

        case '6':
            std::cout << "Friday" << std::endl;
            break;

        case '7':
            std::cout << "Saturday" << std::endl;
            break;

        default:
            std::cout << "Error! Please enter a valid number for the day of the week." << std::endl;
    }

    return 0;
}
