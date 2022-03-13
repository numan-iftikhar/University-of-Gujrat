#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int data[] = {
        52, 86, 48, 78, 80, 82, 51, 63, 58, 80, 65, 84, 55, 58, 53, 53, 82, 71, 69, 53, 82, 72, 62, 68, 64, 51, 57, 52, 55, 57, 64, 49, 84, 85, 67, 67, 61, 84, 62, 52, 79, 63, 57, 64, 51, 53, 85, 86, 71, 50, 57, 62, 80, 48, 49, 54, 73, 77, 73, 66, 69, 59, 77, 55, 75, 55, 62, 73, 79, 51, 85, 79, 67, 65, 65, 60, 68, 68, 80, 79, 73, 63, 80, 69, 62, 85, 83, 70, 72, 71, 56, 60, 66, 57, 81, 55, 57, 54, 57, 65, 60, 84, 65, 55, 84, 87, 65, 52, 58, 64, 71, 58, 72, 76, 56, 52, 59, 60, 64, 45};

    // int size = sizeof(data) / sizeof(int);
    const int size = 120;
    int min, max, ap, a, bp, b, bm, cp, c, d, f;
    ap = a = bp = b = bm = cp = c = d = f = 0;
    cout << "120 Students marks data of subject Math206\n";
    for (int i = 0; i < size; i++)
        cout << data[i] << " ";

    // calculating grade frequency
    for (int j = 0; j < size; j++)
    {
        if (data[j] >= 85)
            ap++;
        else if (data[j] >= 80 && data[j] <= 84)
            a++;
        else if (data[j] >= 75 && data[j] <= 79)
            bp++;
        else if (data[j] >= 70 && data[j] <= 74)
            b++;
        else if (data[j] >= 65 && data[j] <= 69)
            bm++;
        else if (data[j] >= 60 && data[j] <= 64)
            cp++;
        else if (data[j] >= 55 && data[j] <= 59)
            c++;
        else if (data[j] >= 50 && data[j] <= 54)
            d++;
        else if (data[j] <= 49)
            f++;
    }

    // printing chart
    cout << "\n\nA+  ";
    for (int i = 0; i < ap; i++)
        cout << "*";
    cout << " " << ap;

    cout << "\nA   ";
    for (int i = 0; i < a; i++)
        cout << "*";
    cout << " " << a;

    cout << "\nB+  ";
    for (int i = 0; i < bp; i++)
        cout << "*";
    cout << " " << bp;

    cout << "\nB   ";
    for (int i = 0; i < b; i++)
        cout << "*";
    cout << " " << b;

    cout << "\nB-  ";
    for (int i = 0; i < bm; i++)
        cout << "*";
    cout << " " << bm;

    cout << "\nC+  ";
    for (int i = 0; i < cp; i++)
        cout << "*";
    cout << " " << cp;

    cout << "\nC   ";
    for (int i = 0; i < c; i++)
        cout << "*";
    cout << " " << c;

    cout << "\nD   ";
    for (int i = 0; i < d; i++)
        cout << "*";
    cout << " " << d;

    cout << "\nF   ";
    for (int i = 0; i < f; i++)
        cout << "*";
    cout << " " << f;

    // storing grades frequency in array
    int grades[9] = {ap, a, bp, b, bm, cp, c, d, f};
    min = max = grades[0];
    for (int i = 0; i < 9; i++)
    {
        // calculating min and max grades frequency
        if (max < grades[i])
            max = grades[i];
        if (min > grades[i])
            min = grades[i];
    }
    cout << "\n\n";

    // identifying and displaying max grades frequency
    for (int i = 0; i < 9; i++)
    {
        if (max == grades[i])
        {
            if (i == 0)
                cout << max << " students got the grade A+.";
            else if (i == 1)
                cout << max << " students got the grade A.";
            else if (i == 2)
                cout << max << " students got the grade B+.";
            else if (i == 3)
                cout << max << " students got the grade B.";
            else if (i == 4)
                cout << max << " students got the grade B-.";
            else if (i == 5)
                cout << max << " students got the grade C+.";
            else if (i == 6)
                cout << max << " students got the grade C.";
            else if (i == 7)
                cout << max << " students got the grade D.";
            else if (i == 8)
                cout << max << " students got the grade F.";
        }
    }

    // identifying and displaying min grades frequency
    cout << "\n";
    for (int i = 0; i < 9; i++)
    {
        if (min == grades[i])
        {
            if (i == 0)
                cout << min << " students got the grade A+.";
            else if (i == 1)
                cout << min << " students got the grade A.";
            else if (i == 2)
                cout << min << " students got the grade B+.";
            else if (i == 3)
                cout << min << " students got the grade B.";
            else if (i == 4)
                cout << min << " students got the grade B-.";
            else if (i == 5)
                cout << min << " students got the grade C+.";
            else if (i == 6)
                cout << min << " students got the grade C.";
            else if (i == 7)
                cout << min << " students got the grade D.";
            else if (i == 8)
                cout << min << " students got the grade F.";
        }
    }

    return 0;
}