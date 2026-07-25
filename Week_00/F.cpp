#include <iostream>
#include <limits>
using namespace std;

int read_int_with_validation()
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

int num_of_leaves(int num)
{
    return 4 + (num - 1) * 3;
}

int main()
{
    cout << num_of_leaves(read_int_with_validation());
}

