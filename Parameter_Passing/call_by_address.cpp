// In Pass by Address Mechnaism --> The Address of Actual parameters are passed to formal parameters and formal parameters must be Pointers.
// Any chnages made to formal Parameters will modify Actual Parameters.

#include <iostream>
#include <stdio.h>

using namespace std;

//This is Call by Address Mechanism

void swap(int *a, int *b)
//In this "int *a" & "int *b" are Formal Parameters.
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1 = 10, num2 = 4;

    swap(num1, num2);
    //In this "num1" & "num2" are Actual Parameters.

    cout << "num1 ="
         << " " << num1 << endl;
    cout << "num2 ="
         << " " << num2 << endl;

    return 0;
}