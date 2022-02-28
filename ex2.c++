#include <iostream>
using namespace std;
int main()
{
	int length1, length2, length3, length4, length5, area1, area2, area3, area4, area5, vol1, vol2, vol3, vol4, vol5;

	cout << "Enter lengths of cube\n";
	cin >> length1 >> length2 >> length3 >> length4 >> length5;

	cout << "length\t\tarea\t\tvolume" << endl;

	area1 = (6 * length1 * length1);
	vol1 = (length1 * length1 * length1);
	area2 = (6 * length2 * length2);
	vol2 = (length2 * length2 * length2);
	area3 = (6 * length3 * length3);
	vol3 = (length3 * length3 * length3);
	area4 = (6 * length4 * length4);
	vol4 = (length4 * length4 * length4);
	area5 = (6 * length5 * length5);
	vol5 = (length5 * length5 * length5);

	cout << length1 << "\t\t" << area1 << "\t\t" << vol1 << endl;
	cout << length2 << "\t\t" << area2 << "\t\t" << vol2 << endl;
	cout << length3 << "\t\t" << area3 << "\t\t" << vol3 << endl;
	cout << length4 << "\t\t" << area4 << "\t\t" << vol4 << endl;
	cout << length5 << "\t\t" << area5 << "\t\t" << vol5 << endl;

	return 0;
}
