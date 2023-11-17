#include <iostream>

using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int number4 = 0;

    // Prompt the user to enter four numbers
    cout << "Please enter number1: ";
    cin >> number1;

    cout << "Please enter number2: ";
    cin >> number2;

    cout << "Please enter number3: ";
    cin >> number3;

    cout << "Please enter number4: ";
    cin >> number4;

    if (number1 + number2 + number3 + number4 == 0) {
        
        int minNumber = number1;

        if (number2 < minNumber) {
            minNumber = number2;
        }

        if (number3 < minNumber) {
            minNumber = number3;
        }

        if (number4 < minNumber) {
            minNumber = number4;
        }

        cout << "The lowest number is: " << minNumber << endl;
    } else {
        cout << "The sum of the numbers is not zero." << endl;
    }

    return 0;
}