#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int date;
    int pocketMoney = 3000;

    for (date = 1; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            continue; // skip to the next iteration of the loop
        }
        if (pocketMoney == 0)
        {
            break; //Terminate the loop
        }
        cout << "Go out Today!" << endl;
        pocketMoney = pocketMoney - 300;
    }

    return 0;
}