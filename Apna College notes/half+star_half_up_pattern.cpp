#include <iostream>

using namespace std;

int main(){
    int n=6;
    int j;
     for (int i = 1; i <= n; i++)
    {
   

        if (i == 6 || i == 1)
        {
            for (j = 1; j <= 5; j++)
            {
                if (i == 1)
                    cout << "^ ";
                else
                    cout << "* ";
            }
        }
        else
        {
            for (j = 1; j <= n - i; j++)
            {
                cout << "^ ";
            }
            for (j = 1; j <= n - (n - i)-1; j++)
            {
                cout << "* ";
            }
        }

        cout << endl;
    }
}