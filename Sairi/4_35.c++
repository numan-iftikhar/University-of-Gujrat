//4.35 fictorial
#include<iostream>
using namespace std;
int main ()
{
    // factorial of 5 --> 5.4.3.2.1
	int n , i=1 , factorial=1;
	cout<<"Enter the number: ";
	cin>>n;
	while (i<=5)
	{
        factorial = i * factorial; //1.1 1.2 3.2 4.6 5.24
        i++;
	}
	cout<<"factorial of given number is: "<<factorial;

    return 0;
}