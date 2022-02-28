#include <iostream>
using namespace std;

int main()
{
    // creating array of 5 elements
    int array[5];
    cout << "Enter values into the array\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }

    cout << "Elements of the array are:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}