#include <iostream>

using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;

    // Prompt the user to enter a numeric character
    cout << "Please enter a number1: ";
    cin >> number1;
    
    cout << "Please enter a number2: ";
    cin >> number2;
    
    cout << "Please enter a number3: ";
    cin >> number3;

    if (number1 < number2 && number1 == number3) {
        cout << "The maximum number is : " << number2 << endl;
        
    } else if (number2 < number1 && number2 == number3) {
        cout << "The maximum number is: " << number1 << endl;
        
    } else { 
        cout << "The maximum number is: " << number3 << endl;
        }
    return 0;
}