#include <iostream>
#include <string>
using namespace std;

int read_num()
{
    int x;

    cin >> x;

    while (cin.fail() || x < 0)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cin >> x;
    }

    return x;
}

string append_three(int num)
{
    string str_1 = to_string(num);

    str_1.insert(0, "3");
    str_1.insert(str_1.length(), "3");

    return str_1;
}

int main()
{
    cout << append_three(read_num());
}

