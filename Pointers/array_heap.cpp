#include <iostream>
#include <stdio.h>

using namespace std;

struct rectangle
{
    /* data */
    int length;
    int breadth;
};

int main()
{
    int *p;
    char *p1;
    float *p2;
    double *p3;
    struct rectangle *p4;

    cout << sizeof(p) << endl;
    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;

    // p = (int *)malloc(5 * sizeof(int)); //In C
    p = new int[5]; //IN c++

    p[0] = 10;
    p[1] = 12;
    p[2] = 19;
    p[3] = 1;
    p[4] = 14;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }

    delete[] p; //In C++
    free(p);    //In C language
    return 0;
}