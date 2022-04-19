// 4.30 (fibonacci sequence)
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, x = 0, y = 1, a;
    cout << "Enter number of terms: ";
    cin >> n;
    cout << x << " " << y << " ";
    while (i <= n-2)
    {
        // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
        a = x + y;
        cout << a << " ";
        x = y; // second ko first banana ha
        y = a; // new ko second banana ha
        ++i;
    }

return 0;
}