#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    /* data */
    int length;  //4bytes
    int breadth; //4bytes
    char x;      //1bytes  --> but it will take 4 bytes as it uses padding and padding is a concept in C that adds the one or more empty bytes between the memory addresses to align the data in memory.
};               //you can declare variables here too;

// struct Rectangle r1,r2,r3; --> you can declare variables here too

int main()
{
    struct Rectangle r1 = {10, 5};
    
    // printf("%d", sizeof(r1));

    r1.length = 15; //changing the value of length with dot operator
    r1.breadth = 2; //changing the value of breadth with dot operator

    cout << r1.length << endl;
    cout << r1.breadth << endl;

    return 0;
}