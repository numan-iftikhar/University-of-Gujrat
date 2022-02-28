#include <iostream>
using namespace std;
// #define SIZE 5
const int size = 5;
int main()
{
    // Smiling Face 😁
    float array[size] = {4.5, 2.2, 1.1, 4.5, 8.4};
    for (int i = 0; i < size; i++)
    {
        cout << i << "\t" << &array[i] << endl;
    }

    return 0;
}