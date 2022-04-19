#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    // array traversal means visiting each element of the array
    // printing each element of array
    for (int i = 0; i < 5; i++) // here i=0 is vip, since index in arrays start from 0, we must start loop from 0 and not from 1, if we start loop from i=1, it will print 2nd position element first and so on...
    {
        cin >> arr[i];
    }

    // printing each element of array 
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
        cout<<"\t";
    }

    return 0;
}