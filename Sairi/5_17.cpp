//Q#5.17
#include <iostream>
using namespace std;
int main()
{
	int prod;
	float p, q, rp, sum;
	cout<<" Enter product quantity(-1 to end): ";
	cin>>prod;
	while(prod!=-1)
	{
		cout<<" Enter quantity sold: ";
		cin>>q;
        switch (prod) // constant value
        {
            case 1:
                p=2.98;
                break;
            case 2:
                p=4.50;
                break;
            case 3:
                p=9.98;
                break;
            case 4:
                p=4.49;
                break;
            case 5:
                p=6.87;
                break;
        }
        rp=p*q; // retail price = price * quantity
        sum=sum+rp;
		cout<<" Enter p quantity(-1 to end): ";
		cin>>prod;
	}
	cout<<" Total Retail price is: "<<sum<<endl;

    return 0;
}