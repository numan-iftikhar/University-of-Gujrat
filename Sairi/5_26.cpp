#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    for (int i=1; i <= 2; i++)
    {
        cout << i << " : ";
        for (int j=1; j <= 3; j++)
        {
            for (int k=4; k >= 2; k--)
            {
                cout << k;
            }
            cout << "-" << j << endl;
        }
    }
    cout << endl;
    return 0;
}