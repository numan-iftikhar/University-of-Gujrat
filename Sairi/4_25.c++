#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter value of x and y:\n";
    cin >> x >> y;
    /*
     * Main Theme
     * if there is some if condition, it must have an else part
     * if else part exist, executed
     * if else part doesn't exist, nothing happens
     */
    if (y % 2)
    {
        if (x % 2)
            cout << "XxXxX" << endl;
            cout << "-!-!-" << endl;
    }
    else
    {
        cout << "OxOxO" << endl;
        cout << "YyYyY" << endl;
        cout << "-!-!-" << endl;
    }
    
    return 0;
}