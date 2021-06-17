#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a = 10;
    int &r = a;
    a = 25; //if we change the value of a then &r also changes
    int b = 30;
    r = b; //when we change r a is changed

    cout << a << endl
         << r << endl;

    return 0;
}