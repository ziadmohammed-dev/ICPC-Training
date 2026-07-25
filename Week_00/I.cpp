#include <iostream>
//#include <cmath>
using namespace std;

void read_arr(int arr[2])
{
    cin >> arr[0] >> arr[1];
}

int sum_of_square(int x, int y)
{
    //return x * x + y * y;
    return x* x + y * y;
}

int main()
{
    int arr[2];
    read_arr(arr);
    cout << sum_of_square(arr[0], arr[1]);
}

