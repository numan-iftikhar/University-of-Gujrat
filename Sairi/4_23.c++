#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout<<"Enter value of x and y:\n";
    cin>>x>>y;
    /*
    * Main Theme
    * if there is some if condition, it must have an else part
    * if else part exist, executed
    * if else part doesn't exist, nothing happens
    */
   
    if (x > 5){ // 10 > 5 --> True
        if (y > 5) // 7 > 5 --> True
            cout << "x and y are > 5"; // print
        else
            cout<<"This is saira understanding c++ programs !!";
    }
    else
        cout << "x is <= 5";

    return 0;
}