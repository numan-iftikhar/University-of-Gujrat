#include <iostream>
using namespace std;
// index multiply
int main()
{
    // Given an array of integers of 5 elements. compute the product of each element with its index and print it?
    int result = 0;
    int arr[5] = {1, 2, 3, 4, 5};
    // index = 0, 1, 2, 3, 4

    cout << "The product is: " << endl;
    for (int index = 0; index < 5; index++)
    {
        result = arr[index] * index;
        cout << arr[index] << " * " << index << " = " << result << endl;
    }

    return 0;
}