// In Pass by value Mechnaism --> Any changes made to formal Parameters Should not Affect Actual Parameters.

#include <iostream>
#include <stdio.h>

using namespace std;
//This is Call by value Mechanism

int add(int a, int b)
//In this "int *a" & "int *b" are Formal Parameters.
{
    a++;
    cout << a << endl;
    return 0;
}

int main()
{
    int num1 = 10, num2 = 4, sum;

    sum = add(num1, num2);
    //In this "num1" & "num2" are Actual Parameters.

    cout << "num1 ="
         << " " << num1 << endl;

    // In this the value of num1 would not be incremented as "add function" is a void function and not returning any value.

    return 0;
}