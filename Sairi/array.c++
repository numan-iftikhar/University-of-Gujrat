#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 5, 6, 4};
    cout << arr[3]<<endl;

    // updating values
    arr[3] = 45; // whenever i say index, add 1 to index ie., index 1 --> 1+1=2nd position
    arr[1] = 100;

    cout << arr[3]<<endl;
    // cout << arr[0]<<endl;
    // cout << arr[1]<<endl;

    return 0;
}