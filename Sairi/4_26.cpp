//4.26
#include <iostream>
using namespace std;

int main()
{
    int rows, columns, i, j;
    
    cout << "Enter the number of rows\n";
    cin >> rows; // Takes input from user for rows
    cout << "Enter the number of columns\n";
    cin >> columns; // Takes input from user for columns

    for (i = 1; i <= rows; i++) // for rows
    {
        for (j = 1; j <= columns; j++) // for columns
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