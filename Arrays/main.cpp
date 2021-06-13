#include <iostream> //include c++ library
#include <stdio.h>  //include c library

using namespace std;

int main()
{
    // int A[5];
    // A[0] = 12;
    // A[1] = 13;
    // A[2] = 24;

    int A[] = {12, 13, 14, 6, 17, 2, 78};

    // for(int i=0;i<10;i++){
    //     cout<<A[i]<<endl;
    // }

    for (int x : A)
    {
        cout << x << endl;
    }

    // cout << sizeof(A) << endl;
    // cout << A[1] << endl;

    // printf("%d\n", A[2]);

    return 0;
}