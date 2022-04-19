// 4.33(side of a triangle)
#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter sides of triangle; ";
    cin >> a >> b >> c;

    if (a + b > c || b + c > a || a + c > b)
    {
        cout << "Valid triangle";
    }

    else
    {
        cout << "not a valid triangle";
    }

    return 0;
}