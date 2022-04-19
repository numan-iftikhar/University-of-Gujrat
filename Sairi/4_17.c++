// 4.17
#include <iostream>
using namespace std;

int main()
{
    int counter = 1, number, largest = 0;

    while (counter <= 10) // for(int i = 1; i<=9; i++)
    {
        cout << "Enter number: ";
        cin >> number;

        if (number > largest)
            largest = number; // update largest

        counter = counter + 1; // increment by 1
    }
    
    cout << "Largest is: " << largest << endl;
    
    return 0;
}


