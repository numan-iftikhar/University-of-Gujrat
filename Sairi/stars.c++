#include <iostream>
using namespace std;
int main()
{
    int i, j;

    for (i = 1; i <= 5; ++i)
    {
        for (j = 1; j <= 7; ++j)
        {
            if (i == 3)
                cout << "*";
            else
            {
                if (j == 1 || j == 7)
                    cout << "*";
                else
                    cout << " ";
            }
        }
    }

    return 0;
}