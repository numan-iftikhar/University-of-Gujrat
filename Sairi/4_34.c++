// 4.34 (sides of triangle)
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter sides of triangle: \n";
    cin >> a >> b >> c;
    // pythagoras theorem --> h^2 = b^2 + p^2
    if (a * a == b * b + c * c)
    {
        cout << "Right angle triangle";
    }
    else if (b * b == a * a + c * c)
    {
        cout << "Right angle triangle";
    }
    else if (c * c == a * a + b * b)
    {
        cout << "Right angle triangle";
    }
    else
    {
        cout << "not a right angled triangle";
    }

    return 0;
}