#include <iostream>

using namespace std;

int main()
{
    char sym;
    
    // Prompt the user until a valid alphabetic character is entered
    do {
        cout << "Please enter an number character: ";
        cin >> sym;

        if (!isdigit(sym)) {
            cout << "False." << endl;
        }

    } while (!isdigit(sym));


    // Output the uppercase character
    cout << "True "  << endl;

    return 0;
}