#include <iostream>

using namespace std;

int main()
{
    int n = 1;
    while (n <= 12)
    {
        cout << n << "\t\t" << n * 5 << "\t\t" << n * 10 << "\t\t" << n * 15 << endl;
        n++;
    }
    return 0;
}