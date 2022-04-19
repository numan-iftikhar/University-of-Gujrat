#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter values of x and y:\n";
    cin >> x >> y;

    if (y < 10)
    {
        if (x > 10)
            cout << "XxXxX" << endl;
    }
    else
    {
        cout << "YxYxY" << endl;
        cout << "OoOoO" << endl;
    }

    return 0;
}
