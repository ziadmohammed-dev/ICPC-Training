#include <iostream>
using namespace std;

int steps_counter(int x)
{
    int counter{};
    while (x > 0)
    {
        if (x >= 5) {
            counter++;
            x -= 5;
        }
        else if (x >= 4)
        {
            counter++;
            x -= 4;
        }

        else if (x >= 3)
        {
            counter++;
            x -= 3;
        }

        else if (x >= 2)
        {
            counter++;
            x -= 2;
        }

        else if (x >= 1)
        {
            counter++;
            x -= 1;
        }
    }

    return counter;

}

int steps_counter(int x, bool optimized = 0)
{
    return (x + 4) / 5;
}

int main()
{
    int x;
    cin >> x;

    cout << steps_counter(x, 1);
}