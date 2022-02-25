#include <iostream>
using namespace std;

int main()
{
    int rows, columns, i, j;
    cout << "Enter the number of rows\n";
    cin >> rows; // Takes input from user for rows
    cout << "Enter the number of columns\n";
    cin >> columns; // Takes input from user for columns

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == columns)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

// first row = i
// last row = last_row
// first column = j
// last column = last_column
// *****
// *   *
// *   *
// *   *
// *****
// Logic:
// There are stars in the first and last row
// There are stars in the first and last column