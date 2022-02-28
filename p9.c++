#include <iostream>
using namespace std;
#define PI 3.14159
int main()
{
	float angle_in_degrees, angle_in_radians;
	cout << "Enter the angle in degrees: ";
	cin >> angle_in_degrees;

	angle_in_radians = angle_in_degrees * PI / 180;
	cout << "Angle in radians: " << angle_in_radians;
	return 0;
}
