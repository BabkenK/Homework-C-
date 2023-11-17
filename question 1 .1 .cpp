#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char sym;
    
    // Prompt the user until a valid alphabetic character is entered
    do {
        cout << "Please enter an alphabetic character: ";
        cin >> sym;

        if (!isalpha(sym)) {
            cout << "Invalid input. Please enter an alphabetic character." << endl;
        }

    } while (!isalpha(sym));

    // Convert to uppercase using toupper
    sym = toupper(sym);

    // Output the uppercase character
    cout << "Uppercase character would be: " << sym << endl;

    return 0;
}