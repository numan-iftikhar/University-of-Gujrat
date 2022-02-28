#include <iostream>
using namespace std;

int main()
{
    float m, v, r, T;

    cout << "Enter mass : ";
    cin >> m;

    cout << "Enter speed : ";
    cin >> v;

    cout << "Enter radius: ";
    cin >> r;

    T = (m * (v * v)) / r;
    cout << "\nTension is: " << T;

    if (T > 60)
    {
        cout << "\nRope will break!";
    }

    if (T < 60)
    {
        cout << "\nRope will not break!";
    }

    return 0;
}