// 5.16
#include <iostream>
using namespace std;

int main()
{

    int data[5] = {2, 4, 7, 6, 9};
    for (int i = 0; i < 5; ++i)
    {
        cout << data[i] << "  ";
        {
            for (int k = 0; k < 2; ++k)
            {
                for (int j = 0; j < data[i]; ++j)
                    cout << data[i];
                cout << endl << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}