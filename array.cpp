#include <iostream>
using namespace std;

int main()
{
    // creating array of 5 elements
    int array[5];
    // assigning values
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;

    // printing array
    cout << "Elements of the array are: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << "\t";
    }

    return 0;
}