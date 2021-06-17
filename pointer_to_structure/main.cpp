#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    /* data */
    int length;  //4bytes
    int breadth; //4bytes
};

int main()
{
    struct Rectangle r = {10, 5}; // In C++ even if you dont write struct it won't print error but in c it is necessary.
    cout << r.length << endl;
    cout << r.breadth << endl;

    //using pointer
    // Rectangle *p;
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); //in C

    Rectangle *p = &r;

    //when you use pointer then dot operator cannot
    p->length = 5;
    p->breadth = 2;

    cout << p->length << endl;
    cout << p->breadth << endl;

    return 0;
}