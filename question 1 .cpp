#include <iostream>

using namespace std;

int main()
{
    char sym;
    cout << "Please enter the lowercase character : ";
    cin >> sym;
    sym = sym - 32;
    cout << " Uppercase character would be: " << sym << endl;

    return 0;
}
