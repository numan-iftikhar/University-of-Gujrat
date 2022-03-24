// Q#5.15 (a)
#include <iostream>
using namespace std;
int main()
{
    // outer loop is for rows 
    for (int i = 1; i <= 10; ++i)
    {
        // inner loop is for columns
        for (int j = 1; j <= 10; ++j)
        {
            if (j <= i) // j reps column and i reps rows
            // jab tak rows and column equal nhi ho jaty, tb tak stars print krny ha
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}


/*
[a11 a12 a13]
*
**
*** [a31 a32 a33]
****
*****
******
*******
********
*********
**********

*/