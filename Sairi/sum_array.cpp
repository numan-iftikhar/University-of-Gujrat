#include <iostream>
using namespace std;

int main(){
    // Given an array of integers of 5 elements. Compute the sum of all the elements of the array in an integer variable 'sum'?

    int arr[5] = {3, 2, 5, 6, 9};

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i]; // 0+3=3 .. 3+2=5 .. 5+5=10 .. 10+6=16 .. 16+9=25
    }
    cout<<"The sum is: "<< sum;

    return 0;
}