#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter three integers: \n";
    cin>>a>>b>>c;

    // ascending order
    if(a < b && b < c)
        cout<<"Ascending order";

    // descending order
    else if(a > b && b > c)
        cout<<"Descending order";
        
    return 0;
}