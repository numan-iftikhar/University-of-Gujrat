#include <iostream>
using namespace std;

int main(){
    int i=1, j=0;

    while (i<=2) // 2 times
    { // 5(2) = 103
        cout<<"Outer loop: "<<i<<endl;
        j = 1; // 1
        while(j<=5){ // 5 times
            cout<<"Inner loop: "<<j<<endl;
            // cout<<"I love c++"<<endl;
            j++;
        }
    i++;
    }
    
    return 0;
}