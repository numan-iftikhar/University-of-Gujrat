// Exercise 4.22: Mystery3.cpp
#include <iostream>
using namespace std;
int main()
{
    int row = 12; /// int row{12};
    unsigned int column; // positive
    while (row >= 0) // 13 times
    {
        column = 1;
        while (column <= 6) // 6 times
        {
            if (row % 3 == 0)
            {
                cout << "#";
            }
            else
            {
                // ( condition ? True part : False part)
                cout << (column % 6 ? "-" : ">"); // output
            }
            ++column;
        }
        --row;
        cout << endl;
    }
}