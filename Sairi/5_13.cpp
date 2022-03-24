//Q#5.13
#include <iostream>
using namespace std;
int main()
{
	int n=1;
    long long int x=1;
	for(int n=1; n<=20; ++n)
	{
		x=x*n; // 1.1=1 .. 1.2=2 .. 2.3=6 .. 6.4=24 .. 24.5=120
		cout<<"The factorial of "<<n<<" is "<<x<<endl;
	}
	return 0;
}