#include <iostream>
#include <limits>
using namespace std;

int read_num()
{
    int x;

    cin >> x;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cin >> x;
    }

    return x;
}

int next_even_number(int num)
{
    /*return num + (num % 2 == 0) * 2 + (num % 2 == 1);*/
    return (num % 2 == 0) ? (num + 2) : (num + 1);
}

int main()
{
    cout << next_even_number(read_num());
}

