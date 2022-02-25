#include <iostream>
using namespace std;
int main()

{
    // for rows
    for (int i = 1; i <= 3; i = i + 1)
    {
        // for columns
        for (int j = 1; j <= 6; j = j + 1)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}