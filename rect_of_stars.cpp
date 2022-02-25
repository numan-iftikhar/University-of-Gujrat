#include <iostream>

using namespace std;

int main()
{
    // for rows
    for (int i = 0; i < 5; i++)
    {
        // for columns
        for (int j = 0; j < 4; j++)
        {
            cout << "* "; // * * * *
        }
        // printing new line
        cout << endl;
    }

    return 0;
}