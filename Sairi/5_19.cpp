// Q#5.19
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double pi = 0;
    cout << setprecision(6);
    for (int i = 0; i < 200000; ++i)
    {
        pi = pi + 4 * pow(-1, i) / (2 * i + 1);
        if (i > 1 && i % 1000 == 0)
            cout << " Estimation of pie value after " << i << " terms = " << pi << endl;
    }
}