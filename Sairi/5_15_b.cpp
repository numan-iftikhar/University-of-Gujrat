//Q#5.15 (b)
#include <iostream>
using namespace std;
int main()
{
	for( int i=10; i >=1; --i)
	{
		for( int j=1; j<= 10; ++j)
		{
			if(j<=i)
			cout<<"*";
		}
		cout << endl;
	}
    return 0;
}