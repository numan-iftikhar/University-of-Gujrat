//Q#5.15 (d)
#include <iostream>
using namespace std;
int main()
{
	for( int i=1; i <=10; ++i )
	{
		for( int j=10; j>= 1; --j)
		{
			if(j<=i)
			cout<<"*";
			else
			cout<<" ";
		}
		cout << endl;
	}
return 0;	
}