// 4.18
#include <iostream>
using namespace std;
int main()
{
    int i = 1; // counter
    cout << "N"<< "\t"<< "N*5"<< "\t"<< "N*10"<< "\t"<< "N*15" << endl;
    while (i <= 12) // end condition
    {
        cout << i << "\t" << 5 * i << "\t" << 10 * i << "\t" << 15 * i << endl;
        ++i; // increment
    }

    return 0;
}