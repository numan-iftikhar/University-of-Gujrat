// 4.27
#include <iostream>

using namespace std;
int main()
{
    int number, firstDigit, secondDigit, fourthDigit, fifthDigit;

    cout << "Enter a five-digit number: ";
    cin >> number;

    firstDigit = number / 10000; // 12321/10000 --> 1
    secondDigit = number % 10000 / 1000; //2321/1000 --> 2
    fourthDigit = number  % 100 / 10; // 21/10 --> 2
    fifthDigit = number % 10;

    if (firstDigit == fifthDigit && secondDigit == fourthDigit)
        cout << number << " is a palindrome" << endl;
    else
        cout << number << " is not a palindrome" << endl;

    return 0;
}