#include <iostream>
using namespace std;

int main(){
    // Given an array of integers of 5 elements. Compute the sum and square of all the elements of the array in an integer variable 'sum' and print the square of each element?

    int arr[5] = {1,2,3,4,5};

    int sum = 0;

    // calculting sum 
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i]; // 0+3=3 .. 3+2=5 .. 5+5=10 .. 10+6=16 .. 16+9=25
    }
    cout<<"The sum is: "<< sum<<endl;

    // calculating and displaying squares
    cout<<"The square of each element is:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i] * arr[i]<<endl;
    }
    
    return 0;
}