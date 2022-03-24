// Q#5.25
#include <iostream>
using namespace std;
int main()
{
    int count, temp;
    for (count = 1; count <= 10; count++)
    {
        if (count == 5)
        {
            temp = count;
            count = 12;
        }
        else
            cout << count << " ";
    }
    cout << "\nBroke out of loop at count = " << temp << endl;
}