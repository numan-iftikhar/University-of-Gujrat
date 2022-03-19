// Exercise 4.21: Mystery2.cpp

#include <iostream>
using namespace std;
 int main()
{
     int count = 0;
     while (count <= 12)
    {
        // if (count % 3) // 0 mean false
        // {
        //     cout<<"--->"<<endl;
        // }
        // else
        //     cout<<"######"<<endl;
        // ternary operator 
        // ( condition ? True part : False part)
         cout << (count % 3 ? "--->" : "######") << endl;
         ++count;
    }
}