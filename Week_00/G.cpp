#include <iostream>
using namespace std;

void read_arr(int arr[2])
{
    cin >> arr[0] >> arr[1];

    while (!((0 <= arr[0] && arr[0] <= 50) && (0 <= arr[1] && arr[1] <= 50))) // validation
    {
        cin >> arr[0] >> arr[1];
    }
}


int the_calculator_result(int arr[2])
{
    return (arr[0] + arr[1]) * 10 + 1;
}

int main()
{
    int arr[2];

    read_arr(arr);
    cout << the_calculator_result(arr);
}

