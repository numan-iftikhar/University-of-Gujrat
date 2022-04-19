#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 3, 5, 6, 4};
    // array traversal means visiting each element of the array 
    // printing each element of array 
    for (int i = 0; i < 5; i++) // here i=0 is vip, since index in arrays start from 0, we must start loop from 0 and not from 1, if we start loop from i=1, it will print 2nd position element first and so on...
    {
        cout<<arr[i];
        cout<<"\t";
    }
    
    return 0;
}