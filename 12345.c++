// calculate the cgpa of six subject

#include <iostream>
using namespace std;
int main()
{
	int cr_h1, cr_h2, cr_h3, cr_h4, cr_h5, cr_h6, check = 0, sum_cr_h;
	float subject1, subject2, subject3, subject4, subject5, subject6;
	float gradepoint1, gradepoint2, gradepoint3, gradepoint4, gradepoint5, gradepoint6, cgpa;

	cout << "Enter the marks of subject 1:" << endl;
	cin >> subject1;

	cout << "Enter credit hours of subject 1 :" << endl;
	cin >> cr_h1;

	if (subject1 >= 84.5)
	{
		cout << "Your grade is A+" << endl;
		gradepoint1 = 4.0;
		check = 1;
	}

	if (check == 0)
	{
		if (subject1 >= 79.5)
		{
			cout << "Your grade is A" << endl;
			gradepoint1 = 3.7;
			check = 1;
		}
	}
	// subject 2
	cout << "Enter the marks of subject 2:" << endl;
	cin >> subject2;

	cout << "Enter credit hours of subject 2 :" << endl;
	cin >> cr_h2;

	if (subject2 >= 84.5)
	{
		cout << "Your grade is A+" << endl;
		gradepoint2 = 4.0;
		check = 1;
	}

	if (check == 0)
	{
		if (subject1 >= 79.5)
		{
			cout << "Your grade is A" << endl;
			gradepoint2 = 3.7;
			check = 1;
		}
	}
	// subject3
	cout << "Enter the marks of subject 3:" << endl;
	cin >> subject3;

	cout << "Enter credit hours of subject 3 :" << endl;
	cin >> cr_h3;

	if (subject2 >= 84.5)
	{
		cout << "Your grade is A+" << endl;
		gradepoint3 = 4.0;
		check = 1;
	}

	if (check == 0)
	{
		if (subject3 >= 79.5)
		{
			cout << "Your grade is A" << endl;
			gradepoint3 = 3.7;
			check = 1;
		}
	}
	// subject3
	cout << "Enter the marks of subject 3:" << endl;
	cin >> subject3;

	cout << "Enter credit hours of subject 3 :" << endl;
	cin >> cr_h3;

	if (subject3 >= 84.5)
	{
		cout << "Your grade is A+" << endl;
		gradepoint3 = 4.0;
		check = 1;
	}

	if (check == 0)
	{
		if (subject3 >= 79.5)
		{
			cout << "Your grade is A" << endl;
			gradepoint3 = 3.7;
			check = 1;
		}
	}
	// section 4
	cout << "Enter the marks of subject 4:" << endl;
	cin >> subject4;

	cout << "Enter credit hours of subject 4 :" << endl;
	cin >> cr_h4;

	if (subject4 >= 84.5)
	{
		cout << "Your grade is A+" << endl;
		gradepoint4 = 4.0;
		check = 1;
	}

	if (check == 0)
	{
		if (subject4 >= 79.5)
		{
			cout << "Your grade is A" << endl;
			gradepoint4 = 3.7;
			check = 1;
		}
	}
	// subject5
	cout << "Enter the marks of subject 5:" << endl;
	cin >> subject5;

	cout << "Enter credit hours of subject 5 :" << endl;
	cin >> cr_h5;

	if (subject5 >= 84.5)
	{
		cout << "Your grade is A+" << endl;
		gradepoint5 = 4.0;
		check = 1;
	}

	if (check == 0)
	{
		if (subject5 >= 79.5)
		{
			cout << "Your grade is A" << endl;
			gradepoint5 = 3.7;
			check = 1;
		}
	}
	// subject6
	cout << "Enter the marks of subject 6:" << endl;
	cin >> subject6;

	cout << "Enter credit hours of subject 6 :" << endl;
	cin >> cr_h6;

	if (subject6 >= 84.5)
	{
		cout << "Your grade is A+" << endl;
		gradepoint6 = 4.0;
		check = 1;
	}

	if (check == 0)
	{
		if (subject6 >= 79.5)
		{
			cout << "Your grade is A" << endl;
			gradepoint6 = 3.7;
			check = 1;
		}
	}
}