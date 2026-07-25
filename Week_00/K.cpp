#include <iostream>
using namespace std;

int read_num()
{
    int x;
    cin >> x;
    return x;
}

int cubic_x(int x)
{
    return x * x * x;
}

int main()
{
    cout << cubic_x(read_num()) << endl;
}

