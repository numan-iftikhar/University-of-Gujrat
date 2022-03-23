#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "enter the six digits number: ";

    cin >> num;

    cout << num / 100000<<endl; // / means return rightmost digit

        num = num % 100000; // % means remove rightmost digit

    cout << num/10000<<endl;

        num = num % 10000;

    cout << num/1000<<endl;

        num = num % 1000;

    cout << num /100<<endl;

        num = num % 100;

    cout << num/10<<endl;

        num = num % 10;

    return 0;
}