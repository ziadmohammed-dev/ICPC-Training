#include <iostream>
using namespace std;

int read_int()
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

int squares_of_grid(int n)
{
    return n * n;
}

int white_squares(int par_square_of_grid, int A)
{
    return par_square_of_grid - A;
}

int main()
{
    cout << white_squares(squares_of_grid(read_int()), read_int());
}

