//Q#5.20
#include <iostream>
using namespace std;
int main()
{
	int a, b, c, limit=500;
	for(int a=0; a<=limit; ++a)
	{
		if(a*a+b*b==c*c)
		cout<<a<<" * "<<a<<" + "<<b<<" * "<<b<<" = "<<c<<" * "<<c<<endl;
		for (int b=0; b<=limit; ++b)
		{
			if(b*b+c*c==a*a)
			cout<<b<<" * "<<b<<" + "<<c<<" * "<<c<<" = "<<a<<" * "<<a<<endl;
			for(int c=0; c<=limit; ++c)
			{
				if(a*a+c*c==b*b)
				cout<<a<<" * "<<a<<" + "<<c<<" * "<<c<<" = "<<b<<" * "<<b<<endl;
			}
		}
	}
    return 0;
}