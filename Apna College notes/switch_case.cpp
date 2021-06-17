#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    char button;
    cout << "Input a character: ";
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Heya" << endl;
        break;
    case 'c':
        cout << "Hiii" << endl;
        break;
    case 'd':
        cout << "namaste" << endl;
        break;

    default:
        cout << "Holaa!!" << endl;
        break;
    }

    return 0;
}