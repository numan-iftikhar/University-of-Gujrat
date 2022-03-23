//4.31
#include<iostream>
using namespace std;
int main()
{
	double r , pie = 3.14159 , circumference , area , volume;
	cout<<"Enter the radius:";
	cin>>r;
	
	circumference = 2 * pie *r;
	cout<<"Circumference is: "<<circumference;
	
	area = 4* pie * r * r;
	cout<<"Area is: "<<area;
	
	volume = (4 * pie * r * r * r)/3;
	cout<<"Volume is: "<<volume;	

    return 0;
}