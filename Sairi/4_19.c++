// 4.19

#include <iostream>
using namespace std;

int main()
{
    int counter = 1, number, largest=0, secondLargest = 0;

    while (counter <= 10)
    {
        cout << "Enter number: ";
        cin >> number;

        if (number > largest) // 10 > 9
        {
            secondLargest = largest; // 9
            largest = number; // largest = 10
        }
        else if (number > secondLargest)
            secondLargest = number;

        counter = counter + 1; // increase
    }

    cout << "\nLargest is: " << largest << "\nSecond largest is: " << secondLargest << endl;

    return 0;
}