#include <iostream>
using namespace std;

int main(){
    // Calculate and print the table of 2 using array?
    int table[11] = {2,2,2,2,2,2,2,2,2,2,2};
          // index = 0,1,2,3,4,5,6,7,8,9,10
    int result = 0;
    cout<<"Saira's fav table of 2 is being printed !!\n";
    for (int i = 0; i < 11; i++)
    {
        result = table[i] * i;
        cout<<table[i] <<" * "<< i<<" = "<< result<<endl;
    }
    cout<<"Congrats! Saira... your table has been printed !!";

    return 0;
}