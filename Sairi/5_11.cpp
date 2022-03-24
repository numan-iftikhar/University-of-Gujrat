// Q#5.11
#include <iostream>
using namespace std;
int main()
{
    int n, small, x;
    cout << " Enter the 1st value: ";
    cin >> n;
    small = n; // first number is our smallest at first
    for (int i = 2; i <= n; ++i)
    {
        cout << " Enter the number: ";
        cin >> x;
        if (x < small)
            small = x; // update
    }
    cout << "Smallest integer is: " << small << endl;
}