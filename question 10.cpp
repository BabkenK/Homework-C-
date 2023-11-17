#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    long factorial = 1.0; 

    cout << "Please enter the number: ";
    cin >> number;

    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    cout << "The factorial of " << number << " = " << factorial << endl;

    return 0;
}