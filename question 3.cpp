#include <iostream>

using namespace std;

int main()
{
    char sym;

    // Prompt the user to enter a numeric character
    cout << "Please enter a numeric character: ";
    cin >> sym;

    // Convert the char to int
    int numerber = sym - '0';

    // Check if the numeric value is odd or even
    if (numerber % 2 == 1) {
        cout << "Odd number" << endl;
    } else {
        cout << "Even number" << endl;
    }

    return 0;
}