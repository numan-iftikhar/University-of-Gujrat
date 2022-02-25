#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    switch (marks)
    {
    case 90:
        cout << "A+";
        break;
    case 80:
        cout << "A";
        break;
    case 70:
        cout << "B+";
        break;
    case 60:
        cout << "B";
        break;
    default:
        cout << "Invalid marks";
    }

    return 0;
}