#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter number of classes held:";
	cin >> a;
	cout << "Enter number of classes attended:";
	cin >> b;
	c = (b * 100) / a;
	cout << "percentage of class attended:" << c;

	if (c < 75)
	{
		cout << "\nstudent is not allowed to sit in the exam";
	}
	if (c > 75)
	{
		cout << "\nstudent is allowed to sit the exam";
	}

	return 0;
}
