#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;

    cout << a << endl;
    printf("using pointer %d", *p);       // using just p will print some address
    printf("using pointer %d %d", p, &a); // printing adddress of a

    return 0;
}