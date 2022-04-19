#include <iostream>
using namespace std;

int main()
{
    int x;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter number: ";
        cin >> x;
        for (int i = 1; i <= x; i++)
        {
            cout << x;
        }
        cout << endl;
        for (int i = 1; i <= x; i++)
        {
            cout << x;
        }
        cout << endl << endl;
    }

    return 0;
}