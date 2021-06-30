

#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    bool a;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            if (a == false)
            {
                a = true;
                cout << "1 ";
            }
            else if (a == true)
            {
                a = false;
                cout << "0 ";
            }
        }

        cout << endl;
    }

    return 0;
}