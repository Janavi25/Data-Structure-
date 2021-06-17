#include <iostream>
#include <stdio.h>

using namespace std;

int main()   
{

    int n;
    int sum = 0;

    cout << "Enter a number";
    cin >> n;

    while (n >= 0)
    {

        sum = sum + n;
        cout << "Enter a Number:";
        cin >> n;
    }

    cout << "The sum is:" << sum << endl;

    cout<<sizeof(n);

    return 0;
}