// Q#5.12
#include <iostream>
using namespace std;
int main()
{
    int i = 3, p = 1;
    for (int i = 3; i <= 50; ++i)
    {
        if (i % 3 == 0) // checking if i is multiple of 3
            p = p * i;
    }
    cout << " The product of multiple of 3(3 to 50): " << p << endl;

    return 0;
}