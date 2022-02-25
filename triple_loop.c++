#include <iostream>
using namespace std;

int main()
{
    for (int i = 10; i > 5; --i)
    {
        for (int j = 3; j < i; ++j)
        {
            for (int k = 10; k > j; --k)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << "#\n";
    }

    return 0;
}