// Q#5.14
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double amount, principal;
    cout << "\nYear\t" << "Amount on deposit" << endl<<endl; // saira's fav
    for (int rate = 5; rate <= 10; ++rate)
    {
        cout<<"Data for interest rate "<<rate<<"%."<<endl; //saira's fav
        // outer loop is just for increasing the rate
        principal = 1000.00;
        for (int year = 1; year <= 10; year++)
        {
            // amount = principal(1 + rate)^year
            amount = principal * pow(1.0 + rate / 100.00, year);
            cout << year<<"\t" << amount << endl;
        }
        cout << endl;
    }
    return 0;
}