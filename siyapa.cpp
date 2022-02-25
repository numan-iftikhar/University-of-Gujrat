#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    int number, largest = 0;

    while (counter < 10)
    {
        cout << "Enter number: ";
        cin >> number;
        if (number > largest)
        {
            largest = number;
        }
        counter = counter + 1;
    }

    cout << "The largest number is: " << largest;

    return 0;
}